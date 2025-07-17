#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

typedef long long ll;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> heights_init;
    for (int i = 0; i < n; i++) {
      int height;
      cin >> height;
      heights_init.push_back(height);
    }
    int init_value = heights_init[k - 1];
    sort(heights_init.begin(), heights_init.end());
    heights_init.push_back(heights_init.back() + 1);
    vector<pair<int, int>> heights_in_time;
    for (int i = 0; i < n; i++) {
      if (heights_init[i] < init_value)
        continue;
      int diff = heights_init[i + 1] - heights_init[i];
      if (diff)
        heights_in_time.push_back({heights_init[i], diff});
    }
    bool can_pass = true;
    int heights_size =
        heights_in_time.back().first - heights_in_time.front().first + 1;
    int time = 0;
    for (auto &h : heights_in_time) {
      time += h.second;
      if (time > h.first) {
        can_pass = false;
      }
    }
    cout << (can_pass ? "YES" : "NO") << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
