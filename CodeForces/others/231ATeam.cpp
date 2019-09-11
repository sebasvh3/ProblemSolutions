#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
    //freopen("in","r",stdin);
    int n;
    int x,y,z;
    int nproblems=0;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        if(x+y+z > 1 ) nproblems++;
    }
    cout<<nproblems<<endl;
}




