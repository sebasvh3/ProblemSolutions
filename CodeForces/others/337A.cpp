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
    int n,m,x,dif,men=10000000;
    vi nums;
    cin>>n>>m;
    For(i,m) {
        cin>>x;
        nums.pb(x);
    }
    sort(all(nums));
    int k = 1;
    for(int i=0,j=n-1; j<m; j++,i++) {
        dif = nums[j]-nums[i];
        if(dif<men) men=dif;
    }
    cout<<men<<endl;
}
