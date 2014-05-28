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
    int n,t;
    string bgs;
    cin >>n>>t>>bgs;
    while(t--) {
        For(i,n-1) {
            if(bgs[i]=='B' and bgs[i+1]=='G'){
                bgs[i]='G';
                bgs[i+1]='B';
                i++;
            }
        }
    }
    cout<<bgs<<endl;
}
