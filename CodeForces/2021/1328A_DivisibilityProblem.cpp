/*
 * Name : 1328A - Divisibility Problem
 * Url  : https://codeforces.com/contest/1328/problem/A
 * Sub  : https://codeforces.com/contest/1328/submission/110376178
 */

#include <iostream>
using namespace std;

#define in freopen("in", "r", stdin)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            int res = a % b;
            cout << (res == 0 ? 0 : b - a % b);
        }
        else
            cout << b - a;
        cout << endl;
    }
}
