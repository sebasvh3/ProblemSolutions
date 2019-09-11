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


int mcd(int x, int y) {
    int may = x>y?x:y;
    int men = x>y?y:x;
    int res;
    while(true) {
        if(men==0) return may;
        res = may%men;
        if(res == 0){
            return men;
        }
        else {
            may = men;
            men = res;
        }
    }
}

int main() {
    int a,b,n,m;
    bool simon = true;
    cin >>a>>b>>n;
    while(true) {
        if(simon){
            m = mcd(a,n);
            if(m>n){
                cout<<"1"<<endl;
                break;
            }
            n-=m;
            simon = false;
        }
        else {
            m = mcd(b,n);
            if(m>n){
                cout<<"0"<<endl;
                break;
            }
            n-=m;
            simon = true;
        }
        
    }
}
