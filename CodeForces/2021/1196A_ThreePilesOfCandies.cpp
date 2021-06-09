/*
 * Name : 1196A - Three Piles of Candies
 * Url  : https://codeforces.com/problemset/problem/1196/A
 * Sub  : https://codeforces.com/contest/1196/submission/118916496
 */

#include <bits/stdc++.h>

using namespace std;
#define in freopen("in", "r", stdin)

int main() {
    //in;
    int q, x;
    cin >> q;
    long long int sum = 0;
    long long int a,b,c;
    while (q--) {
        vector<long long int> v(3);
        for (auto &i : v) cin >> i;
        cout << accumulate(v.begin(), v.end(), static_cast<long long int>(0)) / 2 << endl;
    }
}
