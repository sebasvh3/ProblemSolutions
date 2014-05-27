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
   string cad1,cad2;
   cin>>cad1>>cad2;
   int dif;
   For(i,cad1.size()) {
       dif = tolower(cad1[i]) - tolower(cad2[i]); 
       if(dif != 0) break;
   }
   if(dif < 0) cout<<"-1"<<endl;
   else if(dif > 0) cout<<"1"<<endl;
   else if(dif == 0) cout<<"0"<<endl;
   
}
