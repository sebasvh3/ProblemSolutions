/*
 * Name : 1529A - Eshag Loves Big Arrays
 * Url  : https://codeforces.com/problemset/problem/1529/A
 * Sub  : https://codeforces.com/contest/1529/submission/133396323
 */
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define in cout <<"\n"; freopen("in", "r", stdin)
#define D(x) cout << #x << ": " << x << " "
#define L cout << endl

int main() {
    // in;
    int t,n;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        vector<int> v(n);
        for (int &i : v) {
            cin >> i;
        }

        sort(v.begin(), v.end());
        int maxDeleted = 0;
        for (int i = 1; n > 1 && i < n; i++) {
            if (v[i] > v[i - 1]) {
                maxDeleted = n - i;
                break;
            }
        }

        cout << maxDeleted << endl;
    }
}
