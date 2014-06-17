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

bool isPrime(llint n) {
    if (n==1) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for(llint div=3; div < sqrt(n)+1; div+=2) {
        if(n%div==0) return false;
    }
    return true;
}

int main() { IO;
    llint n,x;
    cin>>n;
    For(i,n) {
        cin>>x;
        llint a = sqrt(x);
        if(isPrime(a) && a*a==x ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
