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

    vector<int> lengths = {0};
    int zero_qty = 0;
    for (int j = 0; j < n; j++) {
      int number;
      cin >> number;
      if (!number) {
        zero_qty += 1;
      } else {
        if (zero_qty) {
          lengths.push_back(zero_qty);
        }
        zero_qty = 0;
      }
    }
    if (zero_qty) {
      lengths.push_back(zero_qty);
    }
    cout << *max_element(lengths.begin(), lengths.end()) << endl;
  }

  return 0;
}
