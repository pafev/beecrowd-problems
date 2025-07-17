#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define sys                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

void solve() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    map<char, int> letters;
    for (auto &letter : s) {
      if (letters[letter]) {
        letters[letter]++;
      } else {
        letters[letter] = 1;
      }
    }
    int s_size = s.size();
    int mid = s_size / 2;
    string f_half = s.substr(0, mid);
    string s_half = s.substr(mid, s_size);
    // s.clear();
    // s.shrink_to_fit();
    int f_diff_pos = mid - 1;
    int s_diff_pos = 0;
    for (int i = 0; i < mid; i++) {
      int f = mid - i - 1;
      if (f_half[i] != s_half[f]) {
        f_diff_pos = min(f_diff_pos, i);
        s_diff_pos = max(s_diff_pos, i);
      }
    }
    if (f_diff_pos == mid - 1 && s_diff_pos == 0) {
      cout << 0 << endl;
      continue;
    }
    map<char, int> letters_diff_f_half;
    map<char, int> letters_diff_s_half;
    for (int i = 0; i < mid; i++) {
      if (letters_diff_f_half[f_half[i]]) {
        letters_diff_f_half[f_half[i]]++;
      } else {
        letters_diff_f_half[f_half[i]] = 1;
      }
      if (letters_diff_s_half[s_half[i]]) {
        letters_diff_s_half[s_half[i]]++;
      } else {
        letters_diff_s_half[s_half[i]] = 1;
      }
    }
    int total_letters_diff = 0;
    for (auto &[letter, qty] : letters) {
      int qty_diff = qty / 2 - letters_diff_f_half[letter];
      letters_diff_f_half[letter] = qty_diff;
      if (qty_diff > 0) {
        total_letters_diff += qty_diff;
      }
      qty_diff = qty / 2 - letters_diff_s_half[letter];
      letters_diff_s_half[letter] = qty_diff;
    }
    if (total_letters_diff) {
      s_diff_pos = mid - 1;
      int total_letters_diff2 = total_letters_diff;
      for (int i = 0; i < mid; i++) {
        if (letters_diff_f_half[s_half[i]] > 0) {
          letters_diff_f_half[s_half[i]]--;
          total_letters_diff--;
        }
        int f = mid - i - 1;
        if (letters_diff_s_half[f_half[f]] > 0) {
          letters_diff_s_half[f_half[f]]--;
          total_letters_diff2--;
        }
        s_diff_pos++;
        if (!total_letters_diff || !total_letters_diff2)
          break;
      }
    }
    cout << s_diff_pos - f_diff_pos + 1 << endl;
  }
}

int main() {
  sys;

  solve();

  return 0;
}
