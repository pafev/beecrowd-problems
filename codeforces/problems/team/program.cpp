#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  short n;
  cin >> n;
  int totalCount = 0;
  while (n--) {
    bool fA, fB, fC;
    short count = 0;
    cin >> fA >> fB >> fC;
    if (fA)
      count++;
    if (fB)
      count++;
    if (fC)
      count++;
    if (count >= 2)
      totalCount++;
  }
  cout << totalCount << endl;
}

int main() {
  sys;

  solve();

  return 0;
}
