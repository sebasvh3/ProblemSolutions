#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair


string to_str(int num) {
    stringstream a;
    string res;
    a<<num;
    a>>res;
    return res;
}


int main() { IO;
    int n;
    cin>>n;
    if (n>0) {
        cout<<n;
        return 0;
    }
    if (n<0 && n>-100 && (n%10==0 || n>-10)) {
        cout <<"0";
        return 0;
    }
    
    string sn = to_str(n);
    int t = sn.size();
    if (sn[t-1]>sn[t-2]){
        cout<<sn.erase(t-1);
    }
    else cout<<sn.erase(t-2,1);
    
}
