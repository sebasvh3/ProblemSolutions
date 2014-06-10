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
#define all(x)  x.begin(), x.end()
#define allr(x) x.rbegin(),x.rend()
typedef vector<int> vi;
typedef vector< pair<int,int> > vpii;

bool compare(int a, int b) {
    return a > b;
}

int main() { IO;
    freopen("in","r",stdin);
    int n,k,x;
    cin>>n>>k;
    vi ini;
    For(i,n) {
        cin>>x;
        ini.pb(x);
    }
    vi in,out;
    int i=0,j=i+1;
    int may=-10000,sum=0,num;
    int iter=0;
    for(i;i<n;i++) {
        int j=i+1;
        for(int j=i; j<n; j++) {
            in.pb(ini[j]);
            
            
            
            for(int x=0; x<i; x++) out.pb(ini[x]);
            for(int y=j+1; y<n; y++) out.pb(ini[y]);
            sort(all(in));
            sort(all(out),compare);
            bool first=true;
            
//            if(iter<20){
//                l;cout<<"Iteracion.."<<iter<<endl;
//                For(i,in.size())cout<<in[i]<<" ";l;
//                For(i,out.size())cout<<out[i]<<" ";l;
//                For(i,ini.size())cout<<ini[i]<<" ";l;
//                iter++;
//            }
            
            int im=0;
            For(i,in.size()) {
                if(im<out.size() and im<in.size() and im<k) {
                    if(in[i]<out[im]) {
                        num = out[im];
                        im++;
                    }
                    else {
                        num = in[i];
                    }
                }
                else num = in[i];
                if(first) {sum=num; first = false; }
                else sum+=num;
            }
            if(sum>may) may=sum;
            out.clear();
        }
        in.clear();
    }
    cout <<may<<endl;
    
}
