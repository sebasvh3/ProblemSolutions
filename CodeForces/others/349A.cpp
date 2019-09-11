#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl
#define in freopen("in","r",stdin)

#define For(i,a)    for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define all(x)  x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii > vpii;
typedef long long int llint;


int main() { IO;
    int n,b25=0,b50=0,b100=0,x;
    bool dev = true;
    cin>>n;
    For(i, n) {
        cin>>x;
        if(x==25) b25++;
        else if(x==50) {
            if(b25>0){ 
                b25--;
                b50++;
            }
            else dev=false;
        }
        else {
            if(b25>0 and b50>0) {
                b25--;
                b50--;
            }
            else if(b25>2) {
                b25-=3;
            }
            else dev=false;
        }
    }
    
    if(dev) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
