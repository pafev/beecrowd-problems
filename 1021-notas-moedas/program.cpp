#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int total_bills;
  int total_coins;

  cin >> total_bills;
  cin.ignore(1, '.');
  cin >> total_coins;

  cout << "NOTAS:" << endl;
  cout << total_bills / 100 << " nota(s) de R$ 100.00" << endl;
  total_bills %= 100;
  cout << total_bills / 50 << " nota(s) de R$ 50.00" << endl;
  total_bills %= 50;
  cout << total_bills / 20 << " nota(s) de R$ 20.00" << endl;
  total_bills %= 20;
  cout << total_bills / 10 << " nota(s) de R$ 10.00" << endl;
  total_bills %= 10;
  cout << total_bills / 5 << " nota(s) de R$ 5.00" << endl;
  total_bills %= 5;
  cout << total_bills / 2 << " nota(s) de R$ 2.00" << endl;
  total_bills %= 2;
  cout << "MOEDAS:" << endl;
  cout << total_bills << " moeda(s) de R$ 1.00" << endl;
  cout << total_coins / 50 << " moeda(s) de R$ 0.50" << endl;
  total_coins %= 50;
  cout << total_coins / 25 << " moeda(s) de R$ 0.25" << endl;
  total_coins %= 25;
  cout << total_coins / 10 << " moeda(s) de R$ 0.10" << endl;
  total_coins %= 10;
  cout << total_coins / 5 << " moeda(s) de R$ 0.05" << endl;
  total_coins %= 5;
  cout << total_coins << " moeda(s) de R$ 0.01" << endl;

  return 0;
}
