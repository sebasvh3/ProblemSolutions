/**
 * Name : 1451B - Non-Substring Subsequence
 * Url  : https://codeforces.com/problemset/problem/1451/B
 * Sub  : https://codeforces.com/contest/1451/submission/150037758
 */


#include <iostream>
using namespace std;

#define in freopen("in", "r", stdin)
#define For(i, n) for (int i = 0; i < n; i++)

int main() {
  // in;
  int t;
  cin >> t;

  while (t--) {
    int n, q;
    string s;
    cin >> n >> q >> s;

    
    while (q--) {
      int l, r;
      cin >> l >> r;

      int i = 0;
      bool isSub = false;
      while (i < n) {
        if (i < l - 1 && s[i] == s[l - 1]) {
          isSub = true;
          break;
        }
        else if (i >= r && s[i] == s[r - 1]) {
          isSub = true;
          break;
        }
        i = i == l - 1 ? r : i + 1;
      }
      cout << (isSub ? "YES" : "NO") << endl;
    }
  }

}
