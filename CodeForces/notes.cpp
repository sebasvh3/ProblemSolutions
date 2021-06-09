//https://codeforces.com/problemset/problem/17/A
//Microsoft Documentation https://docs.microsoft.com/en-us/cpp/cpp/?view=msvc-160
//Microsoft Reference: https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=msvc-160
//Geeks for Geeks reference: https://www.geeksforgeeks.org/c-plus-plus/?ref=ghm

/**
 * Check static_cast (Problem 1196A.cpp)
 * https://docs.microsoft.com/en-us/cpp/cpp/static-cast-operator?view=msvc-160
 * https://en.cppreference.com/w/cpp/language/static_cast
 * Example cout << accumulate(v.begin(), v.end(), static_cast<long long int>(0)) / 2 << endl; 
*/


#include <iostream>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
#include <set>
#include <iomanip>
#include <map>
#include <cstdio>
// #include <pair>

using namespace std;
#define For(i, a) for (int i = 0; i < a; i++)
#define L cout << "\n"
#define in freopen("in", "r", stdin)

bool isPrime(int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n == 1)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

/**
 * Another more optimal way to calculate n primes. With memory of previous primes
 */
bool isPrime(int n, set<int> primes)
{
    cout << "n= " << n << " raiz=";
    cout << setprecision(2) << fixed << sqrt(n) << " primes: "; //#include <iomanip>
    cout << "razi otro : " << sqrt(485);                        //22.02272
    for (auto it = next(primes.begin()); it != primes.end(); ++it)
    {
        cout << *it << " ";
        if (*it > sqrt(n))
        {
            cout << " SI" << endl;
            break;
        }
        if (n % *it == 0)
        {
            cout << " NO" << endl;
            return false;
        }
    }

    return true;
}

void rangeBasedForLoop()
{
    // https://www.geeksforgeeks.org/range-based-loop-c/
    int n = 10;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
}

void twoCounterInsideFor()
{
    string s = "hola mundo";
    for (int i = 0, k = 4; i < 4; ++i, --k)
    {
        string a = s.substr(0, i) + s.substr(10 - k);
        // Do something
    }
}

void size()
{
    string holas = "hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van888 como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van888como van hola pelao hola mundo que mas como van hola mundo que mas como van hola pelao hola mundo que mas como van hola mundo que mas como van 996";
    cout << "Size of pelao : " << sizeof(holas) << endl;
    cout << "Size of unsigned : " << sizeof(unsigned) << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
}

void minmax()
{
    int first[] = {2, 3, 5, 7, 8, 10, 11};
    string hola[] = {"uno", "hola mundo que mas como van"};
    vector<int> v(first, first + sizeof(first) / sizeof(int));
    vector<int>::iterator it;

    cout << "vector: " << sizeof(first) << endl;
    cout << "int: " << sizeof(int) << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << "uto it: " << *it << " ";
    }

    int ele = *max_element(v.begin() + 1, v.end() - 2);
    L;
    cout << "min_ele " << ele << endl;

    // cout << "Size of long long int : " << sizeof(long long int) << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
}

void sets()
{
    int first[] = {2, 3, 5, 7, 8, 10, 11};
    string hola[] = {"uno", "hola mundo que mas como van"};
    vector<int> v(first, first + sizeof(first) / sizeof(int));
    vector<int>::iterator it;

    cout << "vector: " << sizeof(first) << endl;
    cout << "int: " << sizeof(int) << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << "uto it: " << *it << " ";
    }

    int ele = *max_element(v.begin() + 1, v.end() - 2);
    L;
    cout << "min_ele " << ele << endl;

    // cout << "Size of long long int : " << sizeof(long long int) << endl;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
}

void vectors()
{
    vector<int> v{1, 2, 3, 6, 5};
    vector<int> v2(v);

    v2[2] = 22;

    for (auto i : v)
        cout << " " << i;

    L;
    for (auto i : v2)
        cout << " " << i;
    L;
    cout << "size: " << v.size() << endl;
    L;
}

void addele(int, map<int, int>);

typedef map<int, string> mis;
void maps()
{
    map<int, string> m{{1, "1"}, {2, "2"}};

    m.insert(make_pair<int, string>(3, "3"));
    m.insert(make_pair(4, "4"));
    m.insert(pair<int, string>(23, "22"));
    m[5] = "5";
    m[6] = "6";
    m.insert({7, "7"});

    for (pair<int, string> i : m)
    {
        //cout << i.first << " " << i.second << endl;
    }

    cout << "hola" << endl;
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        //cout << it->first << " " << it->second << endl;
    }

    mis::iterator c = m.find(5);
    cout << "iter: " << c->first << " - " << (*c).second << endl;

    pair<int, int> a = make_pair(5, 10);
    cout << "pair: " << a.first << " - " << a.second << endl;

    map<int, int> m2;
    m2.insert({1, 10});
    m2.insert({20, 20});
    m2.insert({3, 30});
    m2.insert({4, 100});
    m2.insert({10, 100});

    m2[3] += 10;
    m2[5] += 33;
    m2[5] += 10;

    map<int, int> m3 = m2;
    m3[4] = 233;
    addele(11, m3);

    cout << endl
         << "maps2: " << endl;
    for (auto v : m2)
    {
        cout << v.first << " " << v.second << endl;
    }

    cout << "-->" << endl;
    for (auto v : m3)
    {
        cout << v.first << " " << v.second << endl;
    }
}

void testMapsEnd()
{
    in;
    int n, t, x;
    map<int, int> msum;
    cin >> n >> t;
    for (int i = 10; i < n + 10; i++)
    {
        cin >> x;
        msum[x] = i;
    }
    cout << "sumproblem:";
    L;
    for (pair<int, int> i : msum)
    {
        cout << i.first << " " << i.second << endl;
    }

    // auto it = msum.find(15);
    auto it = msum.end();
    cout << "iter end: " << it->first << ", " << it->second << endl;

    msum[18] = 25;
    msum[27] = 35;
    msum[107] = 305;
    msum[90] = 35;

    cout << "sumproblem2:";
    L;
    for (pair<int, int> i : msum)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it2 = msum.end();
    cout << "iter end: " << it2->first << ", " << it2->second << endl;
}

void solveSumProblem()
{
    in;
    int n, t, x;
    map<int, int> msum;
    cin >> n >> t;
    For(i, n)
    {
        cin >> x;
        msum[x] = i;
    }

    map<int, int>::iterator it2;
    for (map<int, int>::iterator it = msum.begin(); it != msum.end(); ++it)
    {
        it2 = msum.find(t - it->first);
        if (it2 != msum.end())
        {
            cout << "The first target is: " << it->first << "," << it->second << endl;
            cout << "The second target is: " << it2->first << "," << it2->second << endl;
            break;
        }
    }
}

//

int main()
{
    //maps();
    //vectors();
    solveSumProblem();
}

void addele(int n, map<int, int> x)
{
    x[n] = 100;
}
