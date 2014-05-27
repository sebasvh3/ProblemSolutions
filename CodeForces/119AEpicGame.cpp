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

using namespace std;

#define D(x) cout << #x << " : " << x << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair


int main(){
    int n;
    int dangerous=1;
    string players;
    cin>>players;
    bool danger=false;
    For(i,players.size()-1){
       if(players[i]==players[i+1]) dangerous++;
       else dangerous = 1;
       if (dangerous == 7){
           danger=true;
           break;
       }
    }
    if(danger){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
