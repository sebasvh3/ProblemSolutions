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
#define in freopen("in","r",stdin)

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii > vpii;
typedef long long int llint;

bool compare(pii a, pii b) {
    return a.second > b.second;
}

int main() { IO;
    int s,n,x,y;
    vpii dra;
    cin>>s>>n;
    For(i,n) {
        cin>>x>>y;
        dra.pb(mp(x,y));
    }
    sort(all(dra));
    For(i,n) cout<<dra[i].first<<" "<<dra[i].second<<endl;
    
    bool win = true;
    For(i,n) {
        if(s > dra[i].first) {
            s+=dra[i].second;
        }
        else {
            win=false;
            break;
        }
    }
    if(win) cout << "YES";
    else cout<<"NO";
    
}
