/*
 * Name : 80A - Paranomix's Predition
 * Url  : https://codeforces.com/problemset/problem/80/A
 * Sub  : https://codeforces.com/contest/80/submission/117343541
 */
#include <bits/stdc++.h>

using namespace std;
#define For(i, a) for (int i = 0; i < a; i++)
#define L cout << "\n"

bool isPrime(int n) {
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n == 1) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int nextPrime = n == 2 ? n + 1 : n + 2;
    while(!isPrime(nextPrime)) {
        nextPrime += 2;
    }

    cout << (nextPrime == m ? "YES" : "NO");L;
}
