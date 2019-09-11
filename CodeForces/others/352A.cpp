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


string imprimir(int n5, int n0) {
    string cad5(n5*9,'5');
    string cad0(n0,'0');
    return cad5+cad0;
}

int main() { IO;
    int n,x;
    int n5=0,n0=0;
    cin>>n;
    For(i,n) {
        cin>>x;
        if(x==5) n5++;
        else n0++;
    }
    
    if(n0==0) {
        cout<<"-1"<<endl;
    }
    else {
        if(n5>=9) cout<<imprimir(n5/9,n0)<<endl;
        else cout<<"0"<<endl;
    }
}

