#include<bits/stdc++.h>
#include<string>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

typedef vector<int> vi;

int main() { IO;
    int n;
    cin>>n;
    
    int cont=1,sol=0;
    while(cont<=n) {
        for(int i=n; i>cont; i--) {
            sol+=cont;
        }
        cont++;
    }
    cout<<sol+cont-1<<endl;
     
}

