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
    int n,c,first,second;
    cin>>n>>c;
    int mDif=0;
    cin>>first;
    Fori(i,1,n) {
        cin>>second;
        //D(mDif);D(first);D(second);l;
        if(first-second > mDif) {
            mDif = first-second;
        }
        first = second;
    }
    if (mDif-c < 0) cout<<"0";
    else cout<<mDif-c;
}
