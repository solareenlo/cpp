#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        int n;
        cin >> n;
        if (n == 0) {
            break ;
        }
        int s[n];
        REP(i, n) {
            cin >> s[i];
        }
        int sum = 0;
        REP(i, n) {
            sum += s[i];
        }
        double ave = (double)sum / (double)n;
        double bunsan = 0.0;
        REP(i, n) {
            bunsan += pow(s[i] - ave, 2);
        }
        bunsan /= (double)n;
        printf("%.8f\n", sqrt(bunsan));
    }
    return 0;
}
