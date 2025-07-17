#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int hi, mi, hf, mf, dh, dm;
  cin >> hi;
  cin >> mi;
  cin >> hf;
  cin >> mf;

  dh = mf < mi ? (hf - hi) - 1 : hf - hi;
  dh = dh < 0 ? 24 + dh : dh;
  dm = mf - mi;
  dm = dm < 0 ? 60 + dm : dm;
  dh = dh == 0 && dm == 0 ? 24 : dh;

  cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;

  return 0;
}
