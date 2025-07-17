#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  short t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int qty_negatives = 0;
    int min_num = INF;
    vector<int> nums;
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;
      if (num <= 0)
        qty_negatives++;
      int abs_num = abs(num);
      if (abs_num < min_num)
        min_num = abs_num;
      nums.push_back(abs_num);
    }
    long long sum = 0;
    for (int &num : nums) {
      sum += num;
    }
    if (qty_negatives % 2 != 0)
      sum -= 2 * min_num;
    cout << sum << endl;
  }

  return 0;
}
