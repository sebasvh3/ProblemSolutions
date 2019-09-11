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
typedef long long int llint;


int main() { IO;
    int n,x;
    vi s;s.pb(0);
    cin>>n;
    For(i, n) {
        cin>>x;
        s.pb(x);
    }
    int s1,s2,d1=0,d2=0;
    cin>>s1>>s2;
    for (int i=s1; i!=s2; i++) {
        if(i==n+1) {i=0;continue;}
        d1+=s[i];
    }
    int i;
    for (i=s1-1; i != s2; i--) {
        if (i==0) {i=n+1;continue;}
        d2+=s[i];
    }
    d2+=s[i];
    
    d1<d2 ? cout<<d1:cout<<d2;        
            
}
