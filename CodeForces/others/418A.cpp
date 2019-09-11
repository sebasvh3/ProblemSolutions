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
typedef vector<int> vi;
typedef vector<pair<int,int> > vpii;

string to_str(int num) {
    stringstream a;
    a<<num;
    return a.str();
}

int main() { IO;
    int n,k;
    cin>>n>>k;
    int win=1;
    //string sol="";
    bool solucion=true;
    
    vpii sol; 
    
    while(win<=n) {
        if(win+k<=n) {
            for(int i=win+1; i<= win+k; i++) {
                //sol+=to_str(win)+" "+to_str(i)+endl;
                sol.pb(mp(win,i));
            }
        }
        else {
            if(win+k-n<win-k) {
                for(int i=win+1; i<= n; i++) {
                    //sol+=to_str(win)+" "+to_str(i)+endl;
                    sol.pb(mp(win,i));
                }
                for(int i=1; i<=win+k-n; i++) {
                    //sol+=to_str(win)+" "+to_str(i)+endl;
                    sol.pb(mp(win,i));
                }
            }
            else{
                solucion=false;
                break;
            }
        }
        win++;
    }
    
    if(solucion) {
        cout<<n*k<<endl;
        For(i,sol.size())
           cout<<sol[i].first<<" "<<sol[i].second<<endl;
    
    } 
    else cout<<"-1"<<endl;
}
