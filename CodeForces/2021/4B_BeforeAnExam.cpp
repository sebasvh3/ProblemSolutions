/*
 * Name : 4B - Before an Exam
 * Url  : http://codeforces.com/contest/4/problem/B
 * Sub  : http://codeforces.com/contest/4/submission/104853507
 */

#include <iostream>
using namespace std;

#define For(i, a) for (int i = 0; i < a; i++)

int main()
{
    int d, stime;
    cin >> d >> stime;

    int minTime[d], maxTime[d];
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
                int increment = maxTime[i] - minTime[i];
                increment = (diff - increment) >= 0 ? increment : diff;
                minTime[i] += increment;
                diff -= increment;
            }
            cout << minTime[i] << " ";
        }
    }
    else {
        cout << "NO" << endl;
    }
}
