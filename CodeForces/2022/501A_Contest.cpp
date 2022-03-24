/**
 * Name : 501A - Contest
 * Url  : https://codeforces.com/problemset/problem/501/A
 * Sub  : https://codeforces.com/contest/501/submission/150731489
 */

#include <bits/stdc++.h>
using namespace std;

#define in freopen("in", "r", stdin)
#define D(x) cout << #x << "=" << x << endl

int main() {
  // in;
  int a, b, c, d;

  cin >> a >> b >> c >> d;

  int misha = max(a * 3 / 10, a - a / 250 * c);
  int vasya = max(b * 3 / 10, b - b / 250 * d);

  if (misha == vasya)
    cout << "Tie" << endl;
  else if (misha > vasya)
    cout << "Misha" << endl;
  else
    cout << "Vasya" << endl;

}
