/*
 * Name : 527B - Error Correct System
 * Url  : http://codeforces.com/problemset/problem/527/B
 * Sub  : http://codeforces.com/contest/527/submission/135792620
 */

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define in        \
    cout << endl; \
    freopen("in", "r", stdin)
#define D(x) cout << #x << ":" << x << "  "
#define L cout << endl;
#define For(i, n) for (int i = 0; i < n; i++)

typedef map<string, int> msi;
typedef map<char, int> mci;

string charsToS(char a, char b) {
    string x(2, a);
    x[1] = b;
    return x;
}

int main() {
    // in;
    int n;

    msi matches;
    mci mapChars;
    string s, t;
    cin >> n >> s >> t;

    int count = 0, perfectMatch = 0;
    string perfectMacthString;

    For(i, n) {
        if (s[i] != t[i]) {
            if (!perfectMatch && matches.find(charsToS(t[i], s[i])) != matches.end()) {
                perfectMatch = i + 1;
                perfectMacthString = charsToS(t[i], s[i]);
            }

            count++;
            matches.insert({charsToS(s[i], t[i]), i + 1});
            mapChars.insert(make_pair(s[i], i + 1));
        }
    }

    string rpos = "-1 -1";
    if (perfectMatch) {
        count -= 2;
        msi::iterator it = matches.find(perfectMacthString);
        rpos = to_string(it->second) + " " + to_string(perfectMatch);
    }
    else
        for (auto it : matches) {
            mci::iterator itChar = mapChars.find(it.first[1]);
            if (itChar != mapChars.end()) {
                count -= 1;
                rpos = to_string(it.second) + " " + to_string(itChar->second);
                break;
            }
        }

    cout << count << endl
         << rpos << endl;
}
