#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.8f\n", dist);
    return 0;
}
