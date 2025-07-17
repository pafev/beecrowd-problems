#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  short r, c;
  cin >> r >> c;
  vector<vector<bool>> matrixInput(r, vector<bool>(c, true));
  unordered_set<int> cols;
  unordered_set<int> rows;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      char cell;
      cin >> cell;
      if (cell == 'S') {
        cols.insert(j);
        rows.insert(i);
        matrixInput[i][j] = false;
      } else {
        matrixInput[i][j] = true;
      }
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (cols.count(j) && rows.count(i)) {
        matrixInput[i][j] = false;
      }
    }
  }
  int count = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (matrixInput[i][j])
        count++;
    }
  }
  cout << count << endl;
}

int main() {
  sys;

  solve();

  return 0;
}
