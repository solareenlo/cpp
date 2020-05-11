#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, C;
    cin >> a >> b >> C;

    double radian = C * M_PI / 180.0;
    double area = 0.5 * a * b * sin(radian);
    double perimeter = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*cos(radian));
    double height = b * sin(radian);

    printf("%.8f\n", area);
    printf("%.8f\n", perimeter);
    printf("%.8f\n", height);
    return 0;
}
