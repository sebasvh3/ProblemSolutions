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


bool isAnagram(string cad1, string cad2) {
    int letras[26] = {0};
    int comodin=0;
    For(i,cad1.size()) {
        if(cad1[i]=='?') {
            comodin++;
        }
        else {
            letras[cad1[i]-'a']++;
        }
    }
    
    For(i,cad2.size()) {
        if(letras[cad2[i]-'a']>0) {
            letras[cad2[i]-'a']--;
        }
        else if(comodin>0) comodin--;
        else return false;
    }
    return true;
}

int main() { IO;
    int n;
    string s,p;
    cin>>s>>p;
      
    int ss = s.size(), sp = p.size(), times=0;        
    if(ss<sp) cout<<"0"<<endl;
    else {
        for(int i=0; i <= ss-sp; i++){
            if(isAnagram(s.substr(i,sp),p)) times++;
        }
        cout<<times<<endl;
    }
}    

