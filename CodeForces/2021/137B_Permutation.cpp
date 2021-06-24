/*
 * Name : 137B-Permutation
 * Url  : https://codeforces.com/problemset/problem/137/B
 * Sub  : https://codeforces.com/contest/137/submission/120479336
 */

#include <bits/stdc++.h>
using namespace std;

#define in freopen("in", "r", stdin)
#define D(x) cout << #x << ":" << x
#define For(i, a) for (int i = 0; i < n; i++)

int main()
{
  //in;
  set<int> a;
  int n, x;
  cin >> n;
  For(i, n) {
    cin >> x;
    if (x <= n) {
      a.insert(x);
    }
  }
  cout << (n - a.size()) << endl;
}
