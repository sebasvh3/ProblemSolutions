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


typedef vector<int> vi;

int main() {
    int n,m;
    string cad;
    
    cin>>n>>m;
    vi filas(n,0);
    vi cols(m,0);
    For(i,n){
        cin>>cad;
        For(j,cad.size()){
            if(cad[j]=='S'){
                filas[i]=1;
                cols[j]=1;
            }
        }
    }
    
    int f = count(filas.begin(),filas.end(),0);
    int c = count(cols.begin(),cols.end(),0);
    
    int tot = f*m+c*n-c*f;
    cout<<tot<<endl;
    
}
