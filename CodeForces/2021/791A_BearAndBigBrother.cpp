/**
 * Name : Bear and Big Brother
 * Url  : https://codeforces.com/problemset/problem/791/A
 * Sub  : https://codeforces.com/contest/791/submission/103544572
 */

#include <iostream>

#define in freopen("in","r",stdin)

using namespace std;

int main() {
    int a,b,y = 0;
    cin >> a >> b;

    while(a <= b) {
        a *= 3;
        b *= 2;
        y++; 
    }

    cout << y << endl;
}
