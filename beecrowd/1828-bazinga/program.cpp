#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<string, set<string>> possibilities{{"pedra", {"lagarto", "tesoura"}},
                                         {"papel", {"pedra", "Spock"}},
                                         {"tesoura", {"papel", "lagarto"}},
                                         {"lagarto", {"Spock", "papel"}},
                                         {"Spock", {"tesoura", "pedra"}}};

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    string sheldon, raj;
    cin >> sheldon;
    cin >> raj;
    cout << "Caso #" << i << ": ";
    if (sheldon == raj) {
      cout << "De novo!" << endl;
    } else if (possibilities[sheldon].count(raj)) {
      cout << "Bazinga!" << endl;
    } else {
      cout << "Raj trapaceou!" << endl;
    }
  }

  return 0;
}
