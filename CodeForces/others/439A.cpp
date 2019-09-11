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
    int n,d,T=0,x;
    cin>>n>>d;
    For(i,n) {
        cin>>x;
        T+=x;
    }
    
    int tShow = 10*(n-1)+T;
    if(tShow <= d) {
        cout<<2*(n-1)+(d-tShow)/5<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
    return 0;
}
