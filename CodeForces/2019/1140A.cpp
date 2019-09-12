/**
 * Name: A. Detective Book
 * Url: https://codeforces.com/problemset/problem/1140/A
 */

#include <iostream>

using namespace std;
#define endl "\n"
#define L cout << endl
#define D(x) cout << #x << " : " << x << "  "
#define For(i, a) for (int i = 0; i < a; i++)

int main()
{
    int n, a, fin = 0, days = 0;
    cin >> n;
    For(i, n) {
        cin >> a;
        if (a > fin) fin = a;
        if (fin == i + 1) days++;
    }
    cout << days << endl;
}
