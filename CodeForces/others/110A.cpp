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
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair



int main() {
    
    cout<<strcmp("dab","cd")<<endl;
    return 0;
    string cad;
    int lucky =0;
    cin>>cad;
    For(i,cad.size()) {
        if(cad[i]=='4' || cad[i]== '7') lucky++;
    }
    if(lucky == 4 or lucky == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
          
}
