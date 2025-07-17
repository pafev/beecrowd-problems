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
    cin >> n;
    cin >> m;

    cout << "W";
    for (int i = 0; i < m - 1; i++) {
      cout << "B";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < m; j++) {
        cout << "B";
      }
      cout << endl;
    }
  }

  return 0;
}
