#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  int time = 240 - k;
  int num_problems = 0;
  for (int i = 1; i <= n; i++) {
    int problem_min = i * 5;
    if (time - problem_min >= 0) {
      time -= problem_min;
      num_problems++;
    }
  }

  cout << num_problems << endl;

  return 0;
}
