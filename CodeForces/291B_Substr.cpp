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
    string cad,sub;
    getline(cin,cad);
    
    bool open = false;
  
    int i=0,j=0;
    while(j<cad.size()) {
        if(cad[j]=='"') {
            if(open) {
                sub=cad.substr(i+1,j-i-1);
                cout<<"<"<<sub<<">"<<endl;
                open=false;
                j++;
                i=j;
            }
            else {
                open=true;
                i=j;
                j++;
            }
        }
        else if(cad[j]==' ' or j==cad.size()-1) {
            if(!open && cad[i]!=' ') {
                sub = j==cad.size()-1&&cad[j]!=' '?cad.substr(i,j-i+1):cad.substr(i,j-i);
                cout<<"<"<<sub<<">"<<endl;
                j++;
                i=j;
            }
            else if(!open) {
                j++;
                i=j;
            }
            else j++;
        }
        else j++;
    }
    return 0;
    
}
