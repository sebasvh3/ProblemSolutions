/**
 * Name : 609A - Fast Food Restaurant
 * Url  : https://codeforces.com/problemset/problem/609/A
 * Sub  : https://codeforces.com/contest/609/submission/156933862
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define in freopen("in", "r", stdin)
#define f(i, a) for (int i = 0; i < a; i++)

bool menor(int a, int b) { return a > b; }

int main() {
  in;
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end(), menor);

  int sum = 0;
  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
    if (sum >= m) {
      cout << i + 1 << endl;
      break;
    }
  }
}