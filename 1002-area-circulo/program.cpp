#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double r;
  cin >> r;
  double pi = 3.14159;

  cout << "A=" << setprecision(4) << fixed << pi * r * r << endl;

  return 0;
}
