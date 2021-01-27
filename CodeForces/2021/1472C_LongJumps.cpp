/*
 * Name : 1472C - Long Jumps
 * Url  : https://codeforces.com/problemset/problem/1472/C
 * Sub  : https://codeforces.com/contest/1472/submission/105391790
 */

#include <iostream>
using namespace std;

#define in freopen("in", "r", stdin)
#define D(x) cout << #x << ":" << x << " "
#define L cout << "\n"
#define For(i, a) for (int i = 0; i < n; i++)

int main() {
    in;
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n;
        int a[n] = {0};
        int maxOut = 0, sum=0;
        For(i, n) {
            cin >> x;
            sum = 0;
            if (x + i >= n) {
                sum = x + a[i]; 
            }
            else {
                sum = a[i] + x;
                if (a[i + x] < sum) {
                    a[i + x] = sum;
                }
            }
            maxOut = maxOut < sum ? sum : maxOut;
        }
        cout << maxOut;L;
    }
}
