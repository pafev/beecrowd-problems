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
    int count = INF;
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<pair<long long, long long>> tables = {
        {n, b}, {n, m - b + 1}, {a, m}, {n - a + 1, m}};
    for (auto &table : tables) {
      int count_pos = 0;
      while (table.first > 1) {
        table.first = (table.first + 1) >> 1;
        count_pos++;
      }
      while (table.second > 1) {
        table.second = (table.second + 1) >> 1;
        count_pos++;
      }
      if (count_pos < count) {
        count = count_pos;
      }
    }
    cout << count + 1 << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
