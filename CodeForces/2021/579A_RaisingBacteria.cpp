/*
 * Name : 579A - Raising Bacteria
 * Url  : https://codeforces.com/problemset/problem/579/A
 * Sub  : https://codeforces.com/contest/579/submission/117201178
 */

#include <bits/stdc++.h>

using namespace std;
#define D(x) cout << #x << ":" << x

int main() {
    int x , minBac = 0;
    cin >> x;
    while (x > 0) {
        if (x % 2 == 0) {
            x /= 2;
        }
        else {
            minBac++;
            x -= 1;
        }
    }

    cout << minBac << endl;
}
