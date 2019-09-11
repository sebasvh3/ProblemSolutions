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



int main() { IO;
    string guest,host,pile;
    int letters[26]={0};
    cin >>guest>>host>>pile;
    int pos;
    if(guest.size()+host.size() == pile.size()) {
        For(i,pile.size()) {
            pos = pile[i]-'A';
            letters[pos]+=1;
        }
        For(i,guest.size()) {
            pos = guest[i]-'A';
            letters[pos]-=1;
        }
        For(i,host.size()) {
            pos = host[i]-'A';
            letters[pos]-=1;
        }
        int acum = count(letters,letters+26,0);
        if(acum==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
          
}
