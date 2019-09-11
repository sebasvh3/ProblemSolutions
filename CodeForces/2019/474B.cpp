/**
 * Name: B. Worms
 * Url:  https://codeforces.com/problemset/problem/474/B
 */
#include <iostream>

using namespace std;

#define D(x) cout << #x << " : " << x << "  "
#define For(i, a) for (int i = 0; i < a; i++)
#define L cout << "\n"

int findPosBin(int *arr, int l, int r, int x)
{
    int mid = l + (r - l) / 2;
    if (x == arr[mid] || r - l <= 0)
        return mid + 1;
    if (mid > 0 && arr[mid - 1] < x && x < arr[mid])
        return mid + 1;
    if (x > arr[mid])
        return findPosBin(arr, mid + 1, r, x);
    else
        return findPosBin(arr, l, mid - 1, x);
}

int main()
{
    // freopen("in", "r", stdin);
    int n, m, sum = 0, x;
    cin >> n;
    int a[n];

    For(i, n)
    {
        cin >> x;
        a[i] = sum += x;
    }

    cin >> m;
    For(i, m)
    {
        cin >> x;
        cout << findPosBin(a, 0, n - 1, x) << endl;
    }
}
