#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  short t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;
    cout << max(n, m) + 1 << endl;
  }

  return 0;
}
