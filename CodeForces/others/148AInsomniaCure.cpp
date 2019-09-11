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

#define D(x) cout << #x << " : " << x << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

typedef vector<int> vi;

int main() {
    int k,l,m,n,d;
    cin >>k>>l>>m>>n>>d;
    vi vec(d+1,0);
    for(int i = k; i<d+1; i+=k) vec[i] = 1;
    for(int i = l; i<d+1; i+=l) vec[i] = 1;
    for(int i = m; i<d+1; i+=m) vec[i] = 1;
    for(int i = n; i<d+1; i+=n) vec[i] = 1;
    
    int num = count(vec.begin(),vec.end(),1);
    cout<<num<<endl;
}
