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


string space(int n) {
    if (n==0) return "";
    string s(n*2,' ');
    return  s;
}

string to_str(int num) {
    stringstream a;
    string res;
    a<<num;
    a>>res;
    return res;
}

int main() { IO;
        
    int n;
    cin>>n;
    int len = n*2+1;
    string present("");
    For(i,n+1) {
        present += space(n-i);
        For(a,i+1) present+=to_str(a)+" ";
        for(int b=i-1; b>=0; b--) present+=to_str(b)+" ";
        present = present.substr(0,present.size()-1);
        present+=endl;
    }
    for(int i=n-1; i>=0; i--) {
        present += space(n-i);
        For(a,i+1) present+=to_str(a)+" ";
        for(int b=i-1; b>=0; b--) present+=to_str(b)+" ";
        present = present.substr(0,present.size()-1);
        present+=endl;
    }
    cout << present;
}
