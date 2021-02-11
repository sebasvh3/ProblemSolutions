/*
 * Name : 200B-Drinks
 * Url  : https://codeforces.com/problemset/problem/200/B
 * Sub  : https://codeforces.com/contest/489/submission/107093625
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define in freopen("in", "r", stdin)
#define For(i, a) for (int i = 0; i < n; i++)

int main() {
    //in;
    int n;
    double total = 0, x;
    cin >> n;
    For(i, n) {
        cin >> x;
        total += x / 100;
    }
    cout << fixed << setprecision(4) << (total / n) * 100 << endl;
}
