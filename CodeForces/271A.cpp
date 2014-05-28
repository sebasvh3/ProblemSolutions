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

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

typedef map<char,int> mii;


bool diferent(int num){
    mii nums;
    stringstream a;
    string sNum;
    a << num;
    a >> sNum;
    For(i,4){
       nums[sNum[i]] = 1; 
    }
    if(nums.size() == 4) return true;
    return false;
}

int main() {
    int anio;
    cin>>anio;
    Fori(i,anio+1,9013){
        if(diferent(i)) {
            cout<<i<<endl;
            break;
        }
    }
}
