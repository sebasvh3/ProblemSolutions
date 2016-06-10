/*
 * 510A
 * Fox And Snake
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n>>m;

    string s1(m, '#');
    string s2(m - 1, '.');

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << s1 << endl;
        }
        if (i % 2 == 0) {
            if (i % 4 == 0) cout << "#" << s2 << endl;
            else cout << s2 << "#" << endl;
        }
    }
}

