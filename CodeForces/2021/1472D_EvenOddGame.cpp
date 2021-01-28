/*
 * Name : 1472D - Even-Odd Game
 * Url  : https://codeforces.com/problemset/problem/1472/D
 * Sub  : https://codeforces.com/contest/1472/submission/105771300
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define in freopen("in", "r", stdin)
#define D(x) cout << #x << ":" << x << " "
#define L cout << "\n"
#define For(i, a) for (int i = 0; i < n; i++)

bool order(int a, int b) {
    return a > b;
}

int main() {
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n;
        long long int sumAlice = 0, sumBob = 0;
        vector<int> nums(n);
        for (int &i : nums) cin >> i;
        sort(nums.begin(), nums.end(), order);

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) sumAlice += nums[i] % 2 == 0 ? nums[i] : 0;
            else sumBob += nums[i] % 2 == 1 ? nums[i] : 0;
        }
        if (sumAlice > sumBob) {
            cout << "Alice";L;
        }
        else if (sumBob != sumAlice) {
            cout << "Bob";L;
        }
        else {
            cout << "Tie";L;
        }
    }
}
