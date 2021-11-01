/*
 * Name : 1027A - Palindromic Twist
 * Url  : http://codeforces.com/problemset/problem/1027/A
 * Sub  : http://codeforces.com/contest/1027/submission/133965601
 */


#include <bits/stdc++.h>

using namespace std;

#define in cout << endl; freopen("in","r",stdin)
#define D(x) cout << #x << ":" << x << "  "
#define l cout << endl;

bool isPalinTwist(string s, int n) {
    for (int ini = 0, end = n - 1; ini < end; ini++, end--) {
        int chi = s[ini];
        int che = s[end];
        if (!(chi == che || abs(chi - che) == 2)) {
            return false;
        }
    }

    return true;
}

int main() {
    // in;
    int t, n;
    string s;
    cin >> t;
    while (t-- > 0) {
        cin >> n;
        cin >> s;
        cout << (isPalinTwist(s, n) ? "YES" : "NO") << endl;
    }
}
