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
    string s,p;
    cin>>s>>p;
    int ssub = 1;
    int ss = s.size(), sp = p.size();
    
    bool first = true;
    
    if(ss<sp) cout<<"0"<<endl;
    else {
        int comodin=0, times=0;
        int a[26]={0};
        int b[26]={0};
        For(i,26) a[p[i]-'a']++;
        For(i,ss) {
            if(s[i]=='?') comodin++;
            else b[s[i]-'a']++;
            if(ssub >= sp) {
                int dif=0;
                For(j,26) {
                    if(b[j]<a[j]) dif+= a[j]-b[j];
                }
                if(dif==0 or comodin>=dif) times++;
                //--
                //if(first) first=false;
                //else{
                    if(s[i-sp+1]=='?') comodin--;
                    else b[s[i-sp+1]-'a']--;
                D(s[i-sp+1]);l;
                D(b[s[i-sp+1]-'a']);l;
                //}
            }
            ssub++;
        }
        cout<<times<<endl;
    }
}    

