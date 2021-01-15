/*
 * Name : 489C - Given Length and Sum of Digits...
 * Url  : https://codeforces.com/problemset/problem/489/C
 * Sub  : https://codeforces.com/contest/489/submission/104447562
 */

#include <iostream>
#include <string>

using namespace std;

string getZeros(int n) {
    n = n < 0 ? 0 : n;
    return string(n, '0');
}

string getNines(int n, int x = 0) {
    string num(x ? n - 1 : n, '9');
    return x ? to_string(x) + num : num;
}

void calMinMax(int m, int s) {
    string min, max;
    int div = s / 9;
    int rem = s % 9;

    if (m == 1) {
        min = to_string(s);
        max = to_string(s);
    }
    else if (div == 0) {
        min = '1' + getZeros(m - 2) + to_string(rem - 1);
        max = to_string(rem) + getZeros(m - 1);
    }
    else if (div == m) {
        min = getNines(m);
        max = getNines(m);
    }
    else if (div > 0 && rem == 0) {
        min = '1' + getZeros(m - div - 1) + getNines(div, 8);
        max = getNines(div) + getZeros(m - div);
    }
    else {
        int addn = (m - div) >= 2 && (rem > 1) ? 1 : 0;
        min = to_string(addn ? 1 : rem) + getZeros(m - div - 1 - addn) + getNines(div + addn, addn ? rem - 1 : 0);
        max = getNines(div) + to_string(rem) + getZeros(m - div - 1);
    }

    cout << min << " " << max;
}

int main() {
    int m, s;
    cin >> m >> s;

    if (s > 9 * m || (m > 1 && s == 0)) {
        cout << "-1 -1";
        return 0;
    }

    calMinMax(m, s);

    return 0;
}
