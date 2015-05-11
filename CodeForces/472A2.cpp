/*
 * Name Problem: A. Design Tutorial: Learn from Math
 */

#include<bits/stdc++.h>
using namespace std;
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL)

#define endl "\n"
#define D(x) cout << #x << " : " << x << "  "
#define l cout << endl
#define in freopen("in","r",stdin)

#define For(i,a)    for(int i=0; i<a; i++)
#define Fori(i,a,b) for(int i=a; i<b; i++)
#define pb push_back
#define mp make_pair
#define all(x)  x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii > vpii;
typedef long long int llint;

bool isComposite(int num) {
    if (num % 2 == 0) return true;
    int ini = 3;
    for (int i = 3; i<= sqrt(num); i+=2) {
        if(num%ini == 0) return true;
    }
    return false;
}

int main() { IO;
    int n;
    cin >> n;
    if(n%2==0 && isComposite(n/2)) {
        cout << n/2 << " " << n/2 <<endl;return 0;
    } 
    
    int x = 4;
    int y = n-4;
    
    bool evalx = false;
    while (x<=y) {
        if(evalx) {
            if (isComposite(x)) {
                cout << x << " " << y << endl;
                return 0;
            }
            evalx = false;
        }
        else {
            if (isComposite(y)) {
                cout << x << " " << y << endl;
                return 0;
            }
            evalx=true;
        }
        x+=1;y-=1;
    }
}
