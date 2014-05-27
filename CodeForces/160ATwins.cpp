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
#include <cctype>
#include <functional>   
#include <numeric>  

using namespace std;

#define D(x) cout << #x << " : " << x << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

typedef vector<int> vi;

int main() {
    int n,x;
    vi vec;
    cin >> n;
    while(n--){
        cin >> x;
        vec.pb(x);
    }
    sort(vec.begin(),vec.end());
    int acum = accumulate(vec.begin(),vec.end(),0);
    
    int tam = n;
    int acum2=0;
    int coin = 1;
    for(int i=vec.size()-1; i>=0; i--) {
        acum2+=vec[i];
        acum -=vec[i];
        if(acum2>acum){
            cout<<coin<<endl;
            break;
        }
        else{
            coin++;
        }
    }
}
