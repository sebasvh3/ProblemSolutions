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
    int n,k,x;
    vi participant;
    cin>>n>>k;
    For(i,n) {
        cin>>x;
        participant.pb(x);
    }
    sort(all(participant));
    
    int teams = 0;
    for(int i=2; i<participant.size(); i+=3) {
        if( 5-participant[i] >= k) teams++;
        else break;
    }
    cout<<teams;
}
