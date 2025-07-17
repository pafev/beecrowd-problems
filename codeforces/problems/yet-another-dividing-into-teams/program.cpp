
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int q;
  cin >> q;

  for (int x = 0; x < q; x++) {
    int pairs_w_diff1 = 0;
    int n;
    cin >> n;
    set<int> skills;
    for (int y = 0; y < n; y++) {
      int skill;
      cin >> skill;
      skills.insert(skill);
    }
    auto current_skill = *(skills.begin());
    for (auto skill : skills) {
      if (skill - current_skill == 1) {
        pairs_w_diff1 += 1;
      }
      current_skill = skill;
    }
    if (pairs_w_diff1 > 0) {
      cout << 2 << "\n";
    } else {
      cout << 1 << "\n";
    }
  }

  return 0;
}
