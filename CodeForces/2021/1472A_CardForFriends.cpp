/*
 * Name : 1472A - Cards for Friends
 * Url  : https://codeforces.com/problemset/problem/1472/A
 * Sub  : https://codeforces.com/contest/1472/submission/105021832
 */

#include <iostream>
using namespace std;

#define D(x) cout << #x << ": " << x

int div2Times(int n) {
    int times = 1;
    while (n % 2 == 0) {
        times *= 2;
        n /= 2;
    }
    return times;
}

int main() {
    int t=0, w, h, n;
    cin >> t;

    while (t--) {
        cin >> w >> h >> n;
        (div2Times(w) * div2Times(h) >= n) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
