/*
 * Name : 527A - Playing With Paper
 * Url  : http://codeforces.com/problemset/problem/527/A
 * Sub  : http://codeforces.com/contest/527/submission/134139115
 */

// Time limit exceeded on test 38
// 1000000000000 42

#include <iostream>
using namespace std;

#define in cout << endl; freopen("in","r",stdin)
#define D(x) cout << #x << ":" << x << "  "
#define L cout << endl;

typedef long long int lli;

int main() {
    // in;
    lli a,b,out=0,res=0;
    cin >> a >> b;
    while(b >= 1) {
        out += a/b; 
        res = a%b;
        a = b;
        b = res;
    }

    cout << out << endl;
}
