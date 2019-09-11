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
    string cad1,cad2;
    int lt[26]={0};
    int x;
    cin>>cad1>>cad2;
    int tam1=cad1.size();
    int tam2=cad2.size();
    bool equal = false;
    if(tam1==tam2) {
        equal=true;
        int j = tam2-1;
        For(i,tam1) {
            if(cad1[i]!=cad2[j]) {
                equal = false;
                break;
            }
            j--;
        }
    }
    
    if(equal) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

