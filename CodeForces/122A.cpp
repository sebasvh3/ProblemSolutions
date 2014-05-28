#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cassert>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  ";
#define l cout << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair


int main() {
    int lucky[] = {4,7,44,47,74,77,444,447,474,744,777,774,747,477};
    bool luck = false;
    int n;
    cin>>n;
    For(i,14) {
        if(n%lucky[i]==0) {
            luck = true;
            break;
        }
    }
    if(luck) cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
}
