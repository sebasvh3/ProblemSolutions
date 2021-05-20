/*
 * Name : 785A - Anton and Polyhedrons
 * Url  : https://codeforces.com/problemset/problem/785/A
 * Sub  : http://codeforces.com/contest/785/submission/116752135
 */

#include<iostream>
#include<map>
#include<string>
#include<cstdio>

using namespace std;
#define in freopen("in","r",stdin)
#define D(x) cout << #x << ": " << x
#define l cout << endl

int main() {
    //in;
    map<string,int> polyhedrons;
    polyhedrons["Tetrahedron"] = 4;
    polyhedrons["Cube"] = 6;
    polyhedrons["Octahedron"] = 8;
    polyhedrons["Dodecahedron"] = 12;
    polyhedrons["Icosahedron"] = 20;

    int n,faces=0;
    cin >> n;
    while(n--) {
        string x;
        cin >> x;
        faces += polyhedrons[x];
    }

    cout << faces << endl;
}
