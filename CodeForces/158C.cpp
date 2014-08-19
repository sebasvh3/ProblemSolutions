#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define M(s) cout <<s
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
typedef vector<string> vs;

void splitDirectory(vs &directorys, string dir) {
    int pos  = dir.find("/",0);
    int pos2 = dir.find("/",pos+1);
    string direc;
    
    bool first = true;
    bool end = false;
    while(true) {
        int dif = pos2-pos;
        
        if(pos2 == string::npos) {
            direc = dir.substr(pos+1)+"/";
            end = true;
        }
        else if(pos2 == dir.size()-1) {
            direc = dir.substr(pos+1,dif);
            end = true;
        }
        else direc = dir.substr(pos+1,dif);
        first=false;
        
        if(direc == "../") {
            if(directorys.size()>0) {
                directorys.pop_back();
            }
        }
        else {
            directorys.pb(direc);
        }
        int next = dir.find("/",pos2+1);
        pos = pos2;
        pos2= next;
        if(end ) break;
    }
}  


int main() { IO;
    
    int n;
    string command;
    vs directorys;
    
    cin>>n;
    
    For(i,n) {
        cin>>command;
        if(command == "cd") {
            string parameter;
            cin>>parameter;
            if(parameter[0]=='/') {
                directorys.clear();
                splitDirectory(directorys,parameter);
            }
            else {
                splitDirectory(directorys,"/"+parameter);
            }
        }
        else if(command == "pwd") {
            cout<<"/";
            For(i,directorys.size()) {
                cout<<directorys[i];
            }
            cout<<endl;
        }
    }
}
