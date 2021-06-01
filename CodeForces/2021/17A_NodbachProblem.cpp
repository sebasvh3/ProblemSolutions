//
/*
 * Name : 17A - Noldbach problem (primes)
 * Url  : https://codeforces.com/problemset/problem/17/A
 * Sub  : https://codeforces.com/contest/17/submission/118123653
 */


#include <iostream>
#include <cmath>
#include <set>

using namespace std;
#define For(i, a) for (int i = 0; i < a; i++)
#define L cout << "\n"

bool isPrime(int n, set<int> primes)
{
    for (auto it = next(primes.begin()); it != primes.end(); ++it)
    {
        if (*it > sqrt(n))
            break;
        if (n % *it == 0)
            return false;
    }
    return true;
}

int main()
{
    int first[] = {2, 3, 5, 7, 11};
    set<int> primes(first, first + 5);
    int n, k;
    cin >> n >> k;

    for (int i = 13; i <= n; i += 2)
        if (isPrime(i, primes))
            primes.insert(i);

    auto it1 = primes.begin();
    int count = 0;
    for (auto it2 = next(it1); it2 != primes.end(); it1 = it2, ++it2)
    {
        int x = *it1 + *it2 + 1;
        if (primes.find(x) != primes.end())
            count++;
    }
    cout << (count >= k ? "YES" : "NO");
}
