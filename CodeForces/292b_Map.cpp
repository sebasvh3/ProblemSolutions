#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a)    for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define all(x)  x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
typedef vector<int> vi;
typedef vector<pair<int,int> > vpii;
typedef map<int,int> mii;



int main() { IO;
    int n,m,x,y;
    mii par;
    cin>>n>>m;
    For(i,m) {
        cin>>x>>y;
        par[x]+=1;
        par[y]+=1;
    }
   
    mii::iterator it;
    int uno=0,dos=0;
    for(it=par.begin(); it!=par.end(); ++it) {
        if(it->second == 1) uno++;
        if(it->second == 2) dos++;
    }
    if(dos==n) cout<<"ring topology"<<endl; 
    else if(uno==n-1) cout<<"star topology"<<endl; 
    else if(uno==2 && dos==n-2) cout<<"bus topology"<<endl; 
    else cout<<"unknown topology"<<endl; 
    
}
