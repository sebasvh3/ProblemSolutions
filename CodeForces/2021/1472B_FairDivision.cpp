/*
 * Name : 1472B - Fair Division
 * Url  : https://codeforces.com/problemset/problem/1472/B
 * Sub  : https://codeforces.com/contest/1472/submission/105085960
 */

#include <iostream>
using namespace std;

#define D(x) cout << #x << ": " << x
#define For(i, a) for (int i = 0; i < a; i++)

int main() {
    int t, n, a, sum1, sum2;
    cin >> t;
    while (t--) {
        cin >> n;
        sum1 = 0; sum2 = 0;
        while (n--) {
            cin >> a;
            a % 2 == 1 ? sum1++ : sum2++;
        }
        (sum1 && sum1 % 2 == 0) || (sum1 == 0 && sum2 % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
    }
}
