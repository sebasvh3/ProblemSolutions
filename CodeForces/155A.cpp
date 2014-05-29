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
    int n,x,best,worst;
    int nVeces=0;
    cin>>n>>x;
    best=x;
    worst=x;
    n--;
    while(n--){
        cin>>x;
        if(x>best){
            best=x;
            nVeces++;
        }
        else if(x < worst){
            worst = x;
            nVeces++;
        }
    }
    cout<<nVeces<<endl;
}

