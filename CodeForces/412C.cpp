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
    int n;
    string cad;
    string out="";
    bool f = true;
    cin>>n;
    For(i,n) {
        cin>>cad;
        if(f) {
            out = cad;
            f=false;
        }
        else {
            For(i,cad.size()) {
                //D(out[i]);D(cad[i]);l;
                if(out[i]=='?') {
                    out[i]=cad[i];
                }
                else if(cad[i]!='?' and cad[i] != out[i]) {
                    out[i]='*';
                }
            }
        }
    }
    //cout<<out<<endl;
    For(i,out.size()) {
        if(out[i]=='*') out[i]='?';
        else if(out[i]=='?') out[i]='x';
    }
    cout<<out<<endl;
    
}
