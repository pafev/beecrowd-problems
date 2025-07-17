#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

typedef long long ll;

void mountTree(vector<int> perm, map<int, int> &tree, int count) {
  if (perm.size() == 2) {
    int max_value = max({perm[0], perm[1]});
    int min_value = min({perm[0], perm[1]});
    tree[max_value] = count;
    tree[min_value] = count + 1;
    return;
  }
  if (perm.size() == 1) {
    tree[perm[0]] = count;
    return;
  }
  if (perm.size() == 0) {
    return;
  }
  auto it = max_element(perm.begin(), perm.end());
  if (!tree[*it]) {
    tree[*it] = count;
    vector<int> left = vector<int>(perm.begin(), it);
    vector<int> right = vector<int>(it + 1, perm.end());
    mountTree(left, tree, count + 1);
    mountTree(right, tree, count + 1);
  }
}

void solve() {
  short t;
  cin >> t;
  while (t--) {
    short n;
    cin >> n;
    vector<int> perm;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      perm.push_back(a);
    }
    map<int, int> tree;
    mountTree(perm, tree, 0);
    for (int i = 0; i < n - 1; i++) {
      cout << tree[perm[i]] << ' ';
    }
    cout << tree[perm[n - 1]] << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
