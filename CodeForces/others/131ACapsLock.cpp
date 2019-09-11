#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cassert>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cctype>

using namespace std;

#define D(x) cout << #x << " : " << x << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair


int main() {
    string cad,cad2="";
    cin>>cad;
    bool change = true;
    cad2+= islower(cad[0]) ? toupper(cad[0]):tolower(cad[0]);
    Fori(i,1,cad.size()) {
        if(isupper(cad[i])) {
            cad2+=tolower(cad[i]);
        }
        else{
            change=false;
            break;
        }
    }
    if(change) cout<<cad2<<endl;
    else cout<<cad<<endl;
}

//int main() {
//    string cad;
//    cin>>cad;
//    cad[0]=toupper(cad[0]);
//    
//    cout<<cad<<endl;
//}

