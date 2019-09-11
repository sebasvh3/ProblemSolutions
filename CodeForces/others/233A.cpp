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
    int n,ha,ma,hs,ms;
    int reps = 1 , mreps=0;
    bool equal=false;
    cin>>n>>ha>>ma;
    For(i, n-1) {
        cin>>hs>>ms;
        equal = ha==hs && ma==ms ? true:false;
        if(equal) reps++;
        else {
            mreps = reps>mreps ? reps : mreps;
            reps=1;
        }
        ha=hs; ma=ms;
    }
    mreps =  reps>mreps ? reps : mreps;
    cout<<mreps<<endl;
}

