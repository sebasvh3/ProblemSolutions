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



int main() { IO;
    int n,x,pols,crims;
    cin>>n;
    crims=0;
    pols=0;
    while(n--) {
        cin>>x;
        if(x==-1) {
            if(pols>0) pols--;
            else crims++;
        }
        else pols+=x;
    }
    cout<<crims<<endl;
}
