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
  string cad;
  cin>>cad;
  string cadOut = "";
  for(int i=0; i< cad.size(); i++){
      if(cad[i] != 'a' && cad[i] != 'e' && cad[i] != 'i' && cad[i] != 'o' && cad[i] != 'u' && 
         cad[i] != 'A' && cad[i] != 'E' && cad[i] != 'I' && cad[i] != 'O' && cad[i] != 'U' &&  
         cad[i] != 'Y' && cad[i] != 'y' ){
          if (cad[i]<= 'Z'){
              string min(1,cad[i]+32);
              cadOut+="."+min;
          }
          else{
              string letra(1,cad[i]);
              cadOut+="."+letra;
          }
      }
  }
  cout<<cadOut<<endl;
  
}




