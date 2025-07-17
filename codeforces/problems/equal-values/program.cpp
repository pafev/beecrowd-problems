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
    int n;
    cin >> n;
    vector<long long> as;
    for (int i = 0; i < n; i++) {
      long long a;
      cin >> a;
      as.push_back(a);
    }
    vector<pair<long long, pair<long long, long long>>> asv2;
    for (int i = 0; i < n; i++) {
      if (i != 0 && as[i] == asv2.back().first) {
        asv2.back().second.second++;
      } else {
        asv2.push_back({as[i], {i + 1, i + 1}});
      }
    }
    long long result = LINF;
    for (auto &a : asv2) {
      long long temp = a.first * (a.second.first - 1 + n - a.second.second);
      if (temp < result) {
        result = temp;
      }
    }
    cout << result << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
