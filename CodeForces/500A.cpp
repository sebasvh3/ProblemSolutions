/**
 * Problem: nameProblem
 */

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
    int n,t,x;
    int i=1,cell=1;
    cin >> n >> t;
    For(i,n-1) {
        if (t == cell) {
            cout<<"YES"<<endl;
            return 0;
        }
        else if (cell>t) {
            cout<<"NO"<<endl;
            return 0;
        }
        cin >> x;
        cell
        
    }
}
