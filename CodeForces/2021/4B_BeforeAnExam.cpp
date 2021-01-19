/*
 * Name : 4B - Before an Exam
 * Url  : http://codeforces.com/contest/4/problem/B
 * Sub  : http://codeforces.com/contest/4/submission/104853507
 */

#include <iostream>
using namespace std;

#define For(i, a) for (int i = 0; i < a; i++)

int main() {

    int d, stime, x, y;
    cin >> d >> stime;
    int minTime[d];
    int maxTime[d];
    int sumMin = 0, sumMax = 0;
    For(i, d) {
        cin >> minTime[i] >> maxTime[i];
        sumMin += minTime[i];
        sumMax += maxTime[i];
    }

    if (sumMin <= stime && stime <= sumMax) {
        cout << "YES" << endl;
        int diff = stime - sumMin;
        For(i, d) {
            if (diff > 0) {
                int incremento = maxTime[i] - minTime[i];
                incremento = (diff - incremento) >= 0 ? incremento : diff;
                diff -= incremento;
                cout << (minTime[i] + incremento) << " ";
            }
            else {
                cout << minTime[i] << " ";
            }
        }
    }
    else {
        cout << "NO" << endl;
    }
}
