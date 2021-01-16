/*
 * Name : 1030A - In Search of an Easy Problem
 * Url  : http://codeforces.com/problemset/problem/1030/A
 * Sub  : http://codeforces.com/contest/1030/submission/104545257
 */

#include<iostream>

using namespace std;

int main() {
    int n,x;
    string out = "EASY";
    cin >> n;
    while(n--) {
        cin >> x;
        if(x==1) {
            out = "HARD";
            break;
        }
    }
    cout << out;
}
