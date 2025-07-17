#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> dragons;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    dragons.push_back({x, y});
  }
  sort(dragons.begin(), dragons.end());
  bool canDefeat = true;
  for (auto &dragon : dragons) {
    if (s > dragon.first) {
      s += dragon.second;
    } else {
      canDefeat = false;
      break;
    }
  }
  cout << (canDefeat ? "YES" : "NO") << endl;
}

int main() {
  sys;

  solve();

  return 0;
}
