#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double total = 0.0;
  for (int i = 0; i < 2; i++) {
    int code, qty;
    double value;
    cin >> code;
    cin >> qty;
    cin >> value;

    total += qty * value;
  }

  cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << total << endl;

  return 0;
}
