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
typedef long long int llint;

int main() { IO;
    string cad;
    vi heavy,metal;
    cin>>cad;
    int pos=0;
    while(pos!=string::npos) {
        pos = cad.find("heavy",pos);
        if(pos!=string::npos) {
            heavy.pb(pos);
            pos++;
        }
    }
    pos=0;
    while(pos!=string::npos) {
        pos = cad.find("metal",pos);
        if(pos!=string::npos) {
            metal.pb(pos);
            pos++;
        } 
    }
    llint nveces=0;
    int k=0;
    int th=heavy.size(), tm = metal.size();
    
    For(i,th) {
        Fori(j,k,tm) {
            if(heavy[i]<metal[j]) {
                nveces+=tm-j;
                k=j;
                break;
            }
        }
    }
    cout<<nveces<<endl;
    
    
    
}
