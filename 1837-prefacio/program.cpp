#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a;
  cin >> b;

  int q, r;
  q = a / b;
  r = a % b;
  if (r < 0) {
    if (b > 0) {
      q--;
      r += b;
    } else {
      q++;
      r -= b;
    }
  }
  cout << q << " ";
  cout << r << endl;

  return 0;
}
