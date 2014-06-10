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


int main() { IO;
    int n,k;
    string cad;
    cin>>n>>k>>cad;
    int t = cad.size();
    
    if(k <= t-k) {
        For(i,k-1) {
            cout<<"LEFT"<<endl;
        }
        For(i,t) {
            cout<<"PRINT "<<cad[i]<<endl;
            if(i<t-1)cout<<"RIGHT"<<endl;
        }
    }
    else{
        Fori(i,k,t){
            cout<<"RIGHT"<<endl;
        }
        for(int i=t-1; i>=0; i--){
            cout<<"PRINT "<<cad[i]<<endl;
            if(i>0)cout<<"LEFT"<<endl;
        }
    }
    
    
    
}
