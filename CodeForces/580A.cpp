#include <bits/stdc++.h>
using namespace std;

#define For(i,a) for(int i=0; i<a; i++)

int main() {
    int n, x, ant, act;
    int cant = 1, max = 1;
    bool first = true;
    cin >> n;

    For(i, n) {
        cin >> act;
        if (first) {
            ant = act;
            first = false;
        } else {
            if (act >= ant) {
                cant++;
                max = max < cant ? cant : max;
            } else {
                cant = 1;
            }
            ant = act;
        }
    }
    cout << max << endl;
}