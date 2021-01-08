/*
 * Name : 489B-BerSU Ball
 * Url  : https://codeforces.com/problemset/problem/489/B
 * Sub  : https://codeforces.com/contest/489/submission/103824708
 */

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define D(x) cout << #x << ": " << x << " "
#define l cout << endl
#define in freopen("in", "r", stdin)
#define For(i, a) for (int i = 0; i < a; i++)

int main() {
    int n, m;

    cin >> n;
    int vn[n];
    For(i, n) cin >> vn[i];

    cin >> m;
    int vm[m];
    For(i, m) cin >> vm[i];

    sort(vn, vn + n);
    sort(vm, vm + m);

    int i = 0, j = 0, pairs = 0;
    while (i < n && j < m) {
        if (abs(vn[i] - vm[j]) <= 1) {
            i++;
            j++;
            pairs++;
        }
        else {
            if (vn[i] < vm[j])
                i++;
            else
                j++;
        }
    }
    cout << pairs;
}
