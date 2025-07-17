#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double a, b;
  cin >> a;
  cin >> b;

  cout << "MEDIA = " << setprecision(5) << fixed << (3.5 * a + 7.5 * b) / 11
       << endl;

  return 0;
}
