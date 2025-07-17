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
    short n;
    cin >> n;
    bool isBobWin = n % 4 == 0;

    cout << (isBobWin ? "Bob" : "Alice") << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
