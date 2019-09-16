/**
 * Name: B. Chocolate 
 * Url: https://codeforces.com/problemset/problem/617/B
 */

//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define endl "\n"
#define L cout << endl
#define D(x) cout << #x << " : " << x << "  "
#define For(i, n) for (int i = 0; i < n; i++)
#define lli long long int

int main()
{
    int n, x, ceros = 0;
    lli w = 0;
    cin >> n;
    For(i, n) {
        cin >> x;
        if (w && x == 1 && ceros) {
            w *= (ceros + 1);
            ceros = 0;
        }
        if (w == 0 && x == 1) w = 1;  
        if (w && x == 0) ceros++;
    }
    cout << w << endl;
}
