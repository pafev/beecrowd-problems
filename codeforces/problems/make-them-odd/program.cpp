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
    set<int> as;
    while (n--) {
      int a;
      cin >> a;
      if (a % 2 == 0) {
        as.insert(a);
      }
    }
    int count = 0;
    set<int> odds;
    for (auto it = as.rbegin(); it != as.rend(); ++it) {
      int odd = *it;
      int power_2 = 0;
      while (odd % 2 == 0) {
        odd /= 2;
        power_2++;
      }
      if (!odds.count(odd)) {
        odds.insert(odd);
        count += power_2;
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
