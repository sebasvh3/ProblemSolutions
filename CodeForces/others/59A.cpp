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
    string cad,cad2;
    cin>>cad;
    cad2=cad;
    int tam = cad.size();
    int mins = 0;
    For(i, tam) {
        int n = cad[i]-'a';
        if(n>=0) mins++;
        cad[i] =tolower(cad[i]);
        cad2[i]=toupper(cad2[i]);
    }
    if(mins >= (tam-mins)) cout<<cad<<endl;
    else cout<<cad2<<endl;
    
}
