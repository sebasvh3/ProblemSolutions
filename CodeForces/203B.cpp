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
    int n,m;
    cin>>n>>m;
    vector<vi> nums(n,vi(n,0));
    int x,y,times=0;
    For(i,m) {
        cin>>x>>y;
        nums[x-1][y-1]=1;//index 0
        times++;
        
    }
    
    for(int i=1; i<n-1; i++) {
        for(int j=1; j<n-1; j++) {
            if(nums[i][j]==1) {
                bool sol = true;
                For(k,9) {
                    if(nums[i+dx][j+dy] != 1){
                        sol=false;
                        break;
                    }
                    if(sol){
                    }
                }
            }
        }
    }
    
    For(i,n) {
        For(j,n) {
            cout<<nums[i][j]<<" ";
        }l;
    }
    return 0;
}
