/*
 * Name : 4C - Registration system
 * Url  : https://codeforces.com/problemset/problem/4/C
 * Sub  : https://codeforces.com/contest/4/submission/104725431
 */


#include <iostream>
#include <map>

using namespace std;

#define mp make_pair
#define in freopen("in", "r", stdin)

typedef map<string, int> mapsi;
typedef mapsi::iterator mapit;

int main() {
    int n;
    string x;
    mapsi bd;
    mapit ele;
    cin >> n;

    while (n--) {
        cin >> x;
        ele = bd.find(x);
        if (ele == bd.end()) {
            bd.insert(mp(x, 1));
            cout << "OK" << endl;
        }
        else {
            cout << ele->first << ele->second++ << endl;
        }
    }
}
