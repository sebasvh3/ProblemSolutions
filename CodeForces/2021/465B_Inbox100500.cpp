/*
 * Name : 465B - Inbox (100500)
 * Url  : https://codeforces.com/problemset/problem/465/B
 * Sub  : https://codeforces.com/contest/465/submission/118230195
 */

#include <iostream>
#include <cstdio>

using namespace std;
#define in freopen("in", "r", stdin)
#define D(x) cout << #x << ": " << x << endl
#define L cout << "\n"

int main() {
    //in;
    int n, x, nx = 0, prev=0, min=0;
    cin >> n;
    
    while (n--) {
        cin >> x;
        nx += x ? 1 : 0;
        min += x ? (prev || nx == 1 ? 1 : 2) : 0;
        prev = x;
    }
    cout << min << endl;
}
