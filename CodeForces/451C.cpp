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


bool isSolution(int n,int k,int d1,int d2) {
    int x1,x2,x3,n2,dif;
    x2 = k+d1+d2;
    x1 = x2+(-1)*d1;
    x3 = x2+(-1)*d2;
    
    D(x1);
    D(x2);
    D(x3);l;l;
    
    
    n2 = n/3;
    dif = n-k;
    bool pos = true;
        if(x1<=n2) {
            dif-=n2-x1;
            if(dif<0) pos = false;
            if(x2<=n2) {
                dif-=n2-x2;
                if(dif<0) pos = false;
                if(x3<=n2) {
                    dif-=n2-x3;
                    if(dif<0) pos = false;
                }
                else pos = false;
            }
            else pos = false;
        }
        else pos = false;
    return pos;
}

int main() { IO;in;
    int t;
    int n,k,d1,d2;
    cin>>t;
    while(t--) {
        cin>>n>>k>>d1>>d2;
        
        //x2 = (k-d1+d2)/3;
        //x1 = x2 +d1;
        //x3 = x2-d2;
        
        if(isSolution(n,k,-d1,-d2) || isSolution(n,k,-d1,d2) || isSolution(n,k,d1,d2) || isSolution(n,k,d1,-d2)) {
            cout <<"yes"<<endl;
        }
        else {
            cout <<"no"<<endl;
        } 
    }
     
}
