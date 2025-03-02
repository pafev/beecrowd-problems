#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double n1, n2, n3, n4, media;
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cin >> n4;
  media = (2 * n1 + 3 * n2 + 4 * n3 + n4) / 10;
  cout << "Media: " << setprecision(1) << fixed << media << endl;
  if (media >= 7) {
    cout << "Aluno aprovado." << endl;
  } else if (media < 5) {
    cout << "Aluno reprovado." << endl;
  } else {
    cout << "Aluno em exame." << endl;
    double exame;
    cin >> exame;
    cout << "Nota do exame: " << setprecision(1) << fixed << exame << endl;
    media = (media + exame) / 2;
    if (media < 5) {
      cout << "Aluno reprovado." << endl;
    } else {
      cout << "Aluno aprovado." << endl;
    }
    cout << "Media final: " << setprecision(1) << fixed << media << endl;
  }

  return 0;
}
