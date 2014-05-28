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
#define D(x) cout << #x << " : " << x << "  ";
#define l cout << endl;

#define For(i,a) for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define Forn(i,a,b,c) for(int i=a; i<b; i+=c)
#define pb push_back
#define mp make_pair


int min(int *v,int n){
    int min = 100;
    int pos = n;
    
    while(n--){
        if(v[n]<min){
            min=v[n];
            pos = n;
        }
    }
    return pos;
}

int max(int *v,int n){
    int max = 0;
    int pos = 0;
    For(i,n){
        if(v[i]>max){
            max=v[i];
            pos=i;
        } 
    }
    return pos;
}

int main() {
    int n;
    int vec[100];
    cin>>n;
    For(i,n){
        cin>>vec[i];
    }
    int pMin = min(vec,n);
    int pMax = max(vec,n);
    
    //D(pMin)D(pMax)l
    
    int movs = pMax+n-(pMin+1);
    if(pMax>=pMin) movs--;
    cout<<movs<<endl;
}
