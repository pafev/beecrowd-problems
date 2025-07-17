#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string square1 = "##";
  string square2 = "..";

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    for (int j = 0; j < n; j++) {
      bool starts_w_square1 = j % 2 == 0;
      for (int k = 0; k < n; k++) {
        if (starts_w_square1) {
          cout << square1;
        } else {
          cout << square2;
        }
        starts_w_square1 = !starts_w_square1;
      }
      cout << endl;
      starts_w_square1 = j % 2 == 0;
      for (int k = 0; k < n; k++) {
        if (starts_w_square1) {
          cout << square1;
        } else {
          cout << square2;
        }
        starts_w_square1 = !starts_w_square1;
      }
      cout << endl;
    }
  }

  return 0;
}
