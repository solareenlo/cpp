#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    double r;
    cin >> r;

    double area = r * r * M_PI;
    double length = 2 * r * M_PI;

    printf("%.6f %.6f\n", area, length);
    return 0;
}
