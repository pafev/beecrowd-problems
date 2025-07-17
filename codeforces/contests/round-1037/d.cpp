#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

typedef long long ll;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> casinos;
    for (int i = 0; i < n; i++) {
      int l, r, real;
      cin >> l >> r >> real;
      casinos.push_back({l, real, r});
    }
    sort(casinos.begin(), casinos.end());
    for (auto &casino : casinos) {
      if (casino[0] <= k && casino[2] >= k) {
        k = max(k, casino[1]);
      }
    }
    cout << k << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
