/**
 * Name : 92A - Chips
 * Url  : https://codeforces.com/problemset/problem/92/A
 * Sub  : https://codeforces.com/contest/92/submission/158564646
 */

#include <cmath>
#include <iostream>
using namespace std;

#define in freopen("in", "r", stdin)

int main() {
  in;
  int n, m;
  cin >> n >> m;

  int max = n * (n + 1) / 2;

  if (m > max) m = m % max;

  int s1 = (-1 + sqrt(1 + 8 * m)) / 2;

  int sum1 = s1 * (s1 + 1) / 2;

  cout << (m - sum1) << endl;
}