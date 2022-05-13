/**
 * Name : 919A - Fast Food Restaurant
 * Url  : https://codeforces.com/problemset/problem/919/A
 * Sub  : https://codeforces.com/contest/919/submission/157079933
 */

#include <bits/stdc++.h>
using namespace std;

#define in freopen("in", "r", stdin)

int main() {
  in;
  int n, m;
  cin >> n >> m;
  double mins = INT_MAX;
  while (n--) {
    double x, y;
    cin >> x >> y;
    mins = min(mins, x / y);
  }

  cout << setprecision(7) << fixed << m * mins << endl;
}