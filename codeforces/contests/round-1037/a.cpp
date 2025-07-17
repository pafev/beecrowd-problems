#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  short t;
  cin >> t;
  while (t--) {
    string x;
    cin >> x;
    vector<int> x_num;
    for (auto &digit : x) {
      x_num.push_back(digit - '0');
    }
    cout << *min_element(x_num.begin(), x_num.end()) << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
