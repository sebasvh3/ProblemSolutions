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

typedef map<int,string> mis;


int main() {
    
    mis name;
    name[1]="Sheldon";
    name[2]="Leonard";
    name[3]="Penny";
    name[4]="Rajesh";
    name[5]="Howard";
    
    int n;
    int dif,rep;
    int bin = 0, acum=0;
    cin>>n;
    while(acum < n) {
        rep = pow(2,bin);
        dif = n-acum;
        acum+= rep*5;
        bin++;
    }
    
    int nName = ceil((double)dif/rep);
    cout<<name[nName]<<endl;
}
