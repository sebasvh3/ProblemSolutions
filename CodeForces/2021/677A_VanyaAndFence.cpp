/*
 * Name : 677A - Vanya and Fence
 * Url  : https://codeforces.com/problemset/problem/677/A
 * Sub  : https://codeforces.com/contest/677/submission/104149630
 */

#include <iostream>

using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x <= h ? 1 : 2;
    }
    cout << sum;
}
