
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

int compare (const void* a, const void* b){
    return (*(int*)b-*(int*)a);
}


int main(){
  #ifdef SV
    freopen("in","r",stdin);
  #endif
    int n;
    cin>>n;
    string word;
    while(n--){
        cin>>word;
        int len = word.size();
        if(len>10){
            stringstream strnum;
            string slen;
            strnum << len-2;
            strnum >> slen;
            string abb = word.substr(0,1)+slen+word[len-1];
            cout<<abb<<endl;
        }
        else cout<<word<<endl;
    }
    
}

