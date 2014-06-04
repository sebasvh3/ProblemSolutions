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

typedef vector<int> vi;

bool compare(int a,int b){
    return a>b;
}

int main() { IO;
    int k,x;
    cin>>k;
    vi meses;
    For(i,12) {
        cin>>x;
        meses.pb(x);
    }
    sort(meses.begin(),meses.end(),compare);
    
    int acum=0;
    bool res=false;
    if(k) {
        int i=0;
        for(i;i<12;i++) {
            acum+=meses[i];
            if(acum>=k) {
                res=true;
                break;
            } 
        }
        if(res) cout<<i+1<<endl;
        else cout<<"-1"<<endl;
    }
    else cout<<"0"<<endl;
}
