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

int dx[]={0,1, 1, 0,-1,-1,-1, 0, 1};
int dy[]={0,0,-1,-1,-1, 0, 1, 1, 1};


bool isVal(int x,int y,int n) {
    if(x>0 && y>0 && x<=n && y<=n) return true;
    return false;
}

int main() { IO;
    int n,m;
    cin>>n>>m;
    
    vector<vi> nums(n+1,vi(n+1,0));
    
    int x,y,times=0;
    int h,k;
    bool square = true,find=false;
    For(i,m) {
        cin>>x>>y;
        nums[x][y]=1;//index 1
        times++;
        //**
        if(times>=9 and !find) {
            For(i,9) {
                h=x+dx[i];k=y+dy[i];
                if(isVal(h,k,n) && nums[h][k]==1){
                    For(j,9){
                        if(isVal(h+dx[j],k+dy[j],n) && nums[h+dx[j]][k+dy[j]]==1) continue;
                        else{
                            square = false;
                            break;
                        } 
                    }
                    if(square){
                        cout<<times<<endl;
                        find=true;
                        break;
                    }
                    square = true;
                }
            }
        }
        
//        if (times == 74 or times == 73) {
//            D(x);D(y);l;
//            For(i, n+1) {
//                For(j, n+1) {
//                    cout << nums[i][j] << " ";
//                }
//                l;
//            }l;
//        }
    }
    
    if(!find) cout<<"-1"<<endl;
    
    
    return 0;
}
