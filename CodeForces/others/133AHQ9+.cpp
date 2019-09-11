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



int main() {
   string cad;
   cin >>cad;
   bool out = false;
   For(i,cad.size()) {
       if (cad[i]=='H' or cad[i]=='Q' or cad[i]=='9'){
           out=true;
           break;
       }
   }
   if(out) cout << "YES" << endl;
   else cout << "NO" << endl;
   
   
}
