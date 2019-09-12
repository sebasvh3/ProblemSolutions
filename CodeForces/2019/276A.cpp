/**
 * Name: A. Lunch Rush
 * Url:  https://codeforces.com/problemset/problem/276/A
 */

#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define IO int a
#define For(i, n) for (int i = 0; i < n; i++)

int main()
{
    IO;
    freopen("in","r", stdin);
    int n, k, joy, max = INT_MIN;
    cin >> n >> k;
    For(i, n) {
        int f, t;
        cin >> f >> t;
        joy = k >= t ? f : f - (t - k);
        if (joy > max) max = joy;
    }
    cout << max << endl;
}