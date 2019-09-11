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

#define D(x) cout << #x << " : " << x << " ";
#define l cout << endl;
#define Dl(x) cout << #x << " : " << x << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair

#define vi vector<int> 
#define mii map<int,int>

int main(){
    #ifdef SV
     freopen("in","r",stdin);
    #endif
    int n,s,numt=0;
    mii nums;
    nums[1]=0;nums[2]=0;nums[3]=0;nums[4]=0;
    cin>>n;
    while(n--){
        cin>>s;
        nums[s]+=1;
    }
    //** Cuatro
    numt+=nums[4];
    //** Tres
    numt+=nums[3];
    if(nums[1]>nums[3]){
        nums[1]-=nums[3];
    }
    else{
        nums[1]=0;
    }
    //** Dos
    numt+=nums[2]/2;
    if(nums[2]%2!=0){
        nums[1]+=2;
    }
    //** Uno
    numt+=nums[1]/4;
    if(nums[1]%4!=0) numt+=1;
    
    cout<<numt<<endl;
}




