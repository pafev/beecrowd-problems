#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<bool> days;
    for (int i = 0; i < n; i++) {
      bool day;
      cin >> day;
      days.push_back(day);
    }
    int temp = 0;
    for (int i = 0; i < n; i++) {
      if (!days[i]) {
        temp++;
        if (temp == k && i != n - 1) {
          days[i + 1] = true;
        }
      } else {
        temp = 0;
      }
    }
    temp = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (!days[i]) {
        temp++;
        if (temp == k)
          count++;
      } else {
        temp = 0;
      }
    }
    cout << count << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
