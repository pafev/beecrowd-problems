#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int sum = 0;
    for (int j = 0; j < n; j++) {
      int number;
      cin >> number;
      sum += number;
    }
    if (sum % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
