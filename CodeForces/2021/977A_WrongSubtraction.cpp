/*
 * Name : Wrong Subtraction
 * Url  : https://codeforces.com/problemset/problem/977/A
 * Sub  : https://codeforces.com/contest/977/submission/103639048
 */

#include<iostream>

#define in freopen("in","r",stdin)
#define For(i,a) for(int i=0; i<a; i++) 

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    For(i,k) {
        n = n%10 == 0 ? n/10 : n-1;  
    }
    cout << n << endl;
}
