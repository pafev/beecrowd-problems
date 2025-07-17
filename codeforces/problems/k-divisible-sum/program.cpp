#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

typedef long long ll;

void solve() {
  short t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    if (k < n) {
      ll temp = k;
      k += (n - k);
      if (n % temp) {
        k += (k - n % k);
      }
    }
    if (k % n) {
      cout << k / n + 1 << endl;
    } else {
      cout << k / n << endl;
    }
  }
}

int main() {
  sys;

  solve();

  return 0;
}
