/**
 * Problem: Initial Bet (478A)
 */ 

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
    int x;
    int sum=0;
    int n = 5;
    while(n--) {
        cin>>x;
        sum+=x;
    }
    if(sum%5 == 0) {
        cout<<sum/5<<endl;
    }
    else {
        cout<<-1<<endl;
    }
    
}
