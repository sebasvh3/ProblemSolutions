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
typedef set<int> si;


int findIni(int *nums, int posIni, int n) {
    //D(posIni);
    int ini = posIni;
    for(int i=posIni; i<n; i++) {
        if(nums[i]==nums[i+1]) ini++;
        else break;
    }
    //D(ini);l;
    return ini;
}

int main() { IO;
    int n,k;
    si seg;
    cin>>n>>k;
    int nums[n+1];
    Fori(i,1,n+1) {
        cin>>nums[i];
    }
    
    int ini=findIni(nums,1,n);
    
    seg.insert(nums[ini]);
    int fin=ini;
    for(int i=ini+1; i<n+1 and seg.size()<k; i++) {
        //for (si::iterator it=seg.begin(); it!=seg.end(); ++it) std::cout << ' ' << *it;l;
        if(nums[i]==nums[ini]){
            ini = findIni(nums,ini+1,n);
        } 
        seg.insert(nums[i]);
        fin = i;
    }
    
    if(seg.size()==k) {
        seg.clear();
        for(int i = fin; i>=ini; i--) {
            seg.insert(nums[i]);
            if(seg.size()==k) {
                ini = i;
                break;
            }
        }
        cout<<ini<<" "<<fin<<endl;
    }
    else cout<<"-1 -1"<<endl;
}
