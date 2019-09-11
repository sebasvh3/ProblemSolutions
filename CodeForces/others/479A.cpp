#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    int r1,r2,r3,r4,r5,r6;
    
    cin >> a >> b >> c;
    r1 = a+b+c;
    r2 = (a+b)*c;
    r3 = a+b*c;
    r4 = a*b+c;
    r5 = a*(b+c);
    r6 = a*b*c;
    
    r1 = max(r1,r2);
    r2 = max(r3,r4);
    r3 = max(r5,r6);
    
    r1 = max(r1,r2);
    r2 = max(r1,r3);
   
    cout<<r2;
    
}
