#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  double delta, r1, r2;

  delta = b * b - 4 * a * c;
  if (delta < 0 || a == 0) {
    cout << "Impossivel calcular" << endl;
  } else {
    r1 = (-b + pow(delta, 0.5)) / (2 * a);
    r2 = (-b - pow(delta, 0.5)) / (2 * a);
    cout << "R1 = " << setprecision(5) << fixed << r1 << endl;
    cout << "R2 = " << setprecision(5) << fixed << r2 << endl;
  }

  return 0;
}
