#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w, b;
    cin >> k >> n >> w;
    
    b = k * w * (w + 1) / 2;
    b - n > 0 ? cout << b-n : cout << 0;
}