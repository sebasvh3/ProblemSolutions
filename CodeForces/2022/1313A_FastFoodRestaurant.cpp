/**
 * Name : 1313A - Fast Food Restaurant
 * Url  : https://codeforces.com/problemset/problem/1313/A
 * Sub  : https://codeforces.com/contest/1313/submission/156684473
 */

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

#define L cout << "\n"
#define in freopen("in", "r", stdin)
#define D(x) cout << #x << ":" << x
#define For(i, n) for (int i = 0; i < n; i++)

typedef map<int, int> mii;
typedef mii::iterator mit;

int main() {
  in;
  int t, a, b, c;
  cin >> t;  
  while (t--) {
    int out = 0;
    cin >> a >> b >> c;
    if (a) out++, a--;
    if (b) out++, b--;
    if (c) out++, c--;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);

    if (a && b) a--, b--, out++;
    if (a && c) a--, c--, out++;
    if (b && c) b--, c--, out++;

    if (a && b && c) out++;
    cout << out << endl; 
  }
}
