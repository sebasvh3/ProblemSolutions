/**
 * Name: A. Left-handers, Right-handers and Ambidexters
 * Url: https://codeforces.com/problemset/problem/950/A
 */

#include <iostream>

using namespace std;
#define endl "\n"
#define L cout << endl
#define D(x) cout << #x << " : " << x << "  "
#define For(i, n) for (int i = 0; i < n; i++)

int main()
{
    int l, r, a, d, min, x;
    cin >> l >> r >> a;
    d = abs(l - r);
    min = l > r ? r : l;
    x = a > d ? (min + d + (a - d) / 2) * 2 : (min + a) * 2;
    cout << x << endl;
}
