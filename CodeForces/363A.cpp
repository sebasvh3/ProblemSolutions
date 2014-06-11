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

string getDigit(char n){
    switch(n) {
        case '0': return "O-|-OOOO";
        case '1': return "O-|O-OOO";
        case '2': return "O-|OO-OO";
        case '3': return "O-|OOO-O";
        case '4': return "O-|OOOO-";
        case '5': return "-O|-OOOO";
        case '6': return "-O|O-OOO";
        case '7': return "-O|OO-OO";
        case '8': return "-O|OOO-O";
        case '9': return "-O|OOOO-";
    }
}


int main() { IO;
    string num;
    cin>>num;
    for(int i=num.size()-1; i>=0; i--) {
        cout<<getDigit(num[i])<<endl;
    }
}
