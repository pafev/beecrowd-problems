#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, bool>> as;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    as.push_back({a, false});
  }
  int total_sum = 0;
  int init_pos = -1;
  for (int i = 0; i < n; i++) {
    bool t;
    cin >> t;
    as[i].second = t;
    if (t) {
      total_sum += as[i].first;
    } else {
      if (init_pos == -1) {
        init_pos = i;
      }
    }
  }
  int new_sum = 0;
  if (init_pos != -1) {
    int final_pos = init_pos + k - 1;
    if (final_pos > n - 1) {
      final_pos = n - 1;
    }
    for (int i = init_pos; i <= final_pos; i++) {
      if (!as[i].second) {
        new_sum += as[i].first;
      }
    }
    int final_it = n - k - 1;
    if (final_it >= init_pos) {
      int pos_new_sum = new_sum;
      for (int i = init_pos; i <= n - k - 1; i++) {
        if (!as[i].second) {
          pos_new_sum -= as[i].first;
        }
        if (!as[i + k].second) {
          pos_new_sum += as[i + k].first;
        }
        if (pos_new_sum > new_sum)
          new_sum = pos_new_sum;
      }
    }
  }
  cout << total_sum + new_sum << endl;
}

int main() {
  sys;

  solve();

  return 0;
}
