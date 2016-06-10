#include<bits/stdc++.h>
using namespace std;

#define For(i,n) for(int i=0; i<n; i++)

int main() {
    int n, p, q, x;
    int nums[105] = {0};
    cin >> n;

    cin >> p;

    For(i, p) {
        cin >> x;
        nums[x] = 1;
    }

    cin >> q;

    For(i, q) {
        cin >> x;
        nums[x] = 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += nums[i];
    }

    if (sum == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}
