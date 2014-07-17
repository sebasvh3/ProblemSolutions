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
    int n,x;
    vi dig5;
    cin>>n;
    For(i,n) {
        cin>>x;
        dig5.pb(x);
    }
    
    int r = -1;
    int num;
    For(i, dig5.size()) {
        num=0;
        Fori(j, i, dig5.size()) {
            num=num*10+dig5[j];
            D(num);l;
            if(num%90==0 and num>r) r=num;
        }
    }
    
    cout<<r<<endl;
}

