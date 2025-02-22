#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  int maiorab;
  int maiorabc;

  maiorab = (a + b + abs(a - b)) / 2;
  maiorabc = (maiorab + c + abs(maiorab - c)) / 2;

  cout << maiorabc << " eh o maior" << endl;

  return 0;
}
