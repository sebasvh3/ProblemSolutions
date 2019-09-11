#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

typedef long long int lint; 


int main() { IO;
    lint n,k;
    cin>>n>>k;
    lint impares = ceil((double)n/2);
    if(k<=impares) {
        cout<<2*k-1<<endl;
    }
    else {
        cout<<2*(k-impares)<<endl;
    }
}
