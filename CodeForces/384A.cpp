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
    int n;
    cin>>n;
    int pares = n/2;
    int impares = (n%2 == 0) ? pares : pares+1;
    cout<<impares*impares+pares*pares<<endl;
    For(i,n) {
        string line(n,'.');
        For(j,n) {
            if(i%2==0) {
                if(j%2==0) line[j]='C';
            }
            else {
                if(j%2!=0) line[j]='C';
            }
        }
        cout<<line<<endl;
    }
}
