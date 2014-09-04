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
typedef set<char> sc;
typedef map<char, int> mci;


// ? = 63
// 0 = 48
// 9 = 57
// A = 65
// J = 74

string pot10(int n) {
    if(n==0) return "";
    string cad(n,'0');
    return cad;
}

llint miFactorial(bool letra, int n) {
    int num=1;
    if (n==0) return (llint)1;
    for(int i=9; i>9-n+1; i--) num*=i;
    if (letra) return (llint) 9*num;
    else return (llint) 10*num;
}

int main() { IO;
    int n;
    string s;
    cin>>s;
    
    int digit[13] = {0};
    
    bool letra=false;
    For(i, s.size()) {
        int num = s[i];
        if(s[i]=='?') {
            digit[0]++;
        }
        else if(s[i] > '?') {
            if(i==0) letra=true;
            digit[s[i]-'?']=1;
        }
    }
    
    llint hints=1;
    string ceros;
    if(s[0]=='?') {
        if(digit[0]>0) {
            hints=9;
            ceros=pot10(digit[0]-1);
        }
    }
    else {
        if(digit[0]>0) ceros = pot10(digit[0]);
    }
    
    
    int nletras = 0;
    Fori(i,2,13) {
        if(digit[i]==1) {
            nletras++;
        }
    }
    
    cout<<hints*miFactorial(letra,nletras)<<ceros<<endl;
    return 0;
}
