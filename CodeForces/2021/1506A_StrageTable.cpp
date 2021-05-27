/*
 * Name : 1506A - Strange Table
 * Url  : https://codeforces.com/problemset/problem/1506/A
 * Sub  : https://codeforces.com/contest/1506/submission/117519053
 */

#include <bits/stdc++.h>
using namespace std;

#define L cout << "\n"
#define in freopen("in", "r", stdin)
typedef long long int lli;

int main() {
    //in;
    int t;
    lli n, m, x;
    cin >> t;
    while (t--) {
        cin >> n >> m >> x;
        lli row = (x - 1) % n;
        lli col = (x - 1) / n;
        lli y = row * m + col + 1;

        cout << y; L;
    }
}
