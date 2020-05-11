#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int x[n]; REP(i, n) cin >> x[i];
    int y[n]; REP(i, n) cin >> y[i];

    int D1 = 0;
    REP(i, n) {
        D1 += abs(x[i] - y[i]);
    }

    double D2 = 0.0;
    REP(i, n) {
        D2 += pow(abs(x[i] - y[i]), 2);
    }
    D2 = sqrt(D2);

    double D3 = 0.0;
    REP(i, n) {
        int tmp = 0;
        tmp += abs(x[i] - y[i]);
        D3 += tmp * tmp * tmp;
    }
    D3 = cbrt(D3);

    double D_INF = 0.0;
    REP(i, n) {
        D_INF = max(D_INF, (double)abs(x[i] - y[i]));
    }

    printf("%.6f\n", (double)D1);
    printf("%.6f\n", D2);
    printf("%.6f\n", D3);
    printf("%.6f\n", D_INF);
    return 0;
}
