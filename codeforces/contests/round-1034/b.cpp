#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> players;
    while (n--) {
      int player;
      cin >> player;
      players.push_back(player);
    }
    j = players[j - 1];
    bool canJWin = true;
    if (k <= 1 && *max_element(players.begin(), players.end()) != j)
      canJWin = false;

    cout << (canJWin ? "YES" : "NO") << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
