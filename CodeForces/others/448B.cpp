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


bool hasStructure(string cad1, string cad2) {
    int letras[26] = {0};
    For(i,cad1.size()) {
        int pos = cad1[i] - 'a';
        letras[pos]++;
    }
    For(i,cad2.size()) {
        int pos2 = cad2[i] - 'a';
        if(letras[pos2]>0) letras[pos2]--;
        else return false;
    }
    return true;
}

bool isArray(string cad1, string cad2) {
    int ant = -1;
    For(i,cad2.size()) {
        int sig = cad1.find(cad2[i],ant+1);
        //D(sig);
        if(sig>=ant) ant = sig;
        else return true;
    }
    return false;
}

int main() { IO;
    string s,t;
    cin>>s>>t;
    bool automaton,array;
    if(hasStructure(s,t)) {
        automaton = s.size() == t.size() ? false:true;
        //array = s.find(t)==string::npos ? true:false;
        array = isArray(s,t);
        if(automaton and array) cout<<"both"<<endl;
        else if(automaton) cout<<"automaton"<<endl;
        else if(array) cout<<"array"<<endl;
    }
    else cout<<"need tree"<<endl;
    
}
