/*
 * Name : Hit the Lottery
 * Url  : https://codeforces.com/problemset/problem/996/A
 * Sub  : https://codeforces.com/contest/996/submission/116933398
 */

#include<iostream>

using namespace std;
#define D(x) cout << #x << ": " << x
#define L cout << "\n"
#define For(i,a) for(int i =0; i<a ; i++)


int main() {
    int n, div, i = 0, bills = 0;
    int denominations[] = {100,20,10,5,1};
    cin >> n;
    while(n) {
        div = n / denominations[i];
        n = n % denominations[i]; 
        bills += div;
        i++;
        if(n == 0) {
            break;
        }
    }
    cout << bills;L;
}
