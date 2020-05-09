#include <iostream>
#include <stdio.h>
using namespace std;

int a, b;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    cout << a / b << ' ';
    cout << a % b << ' ';
    printf("%.5f\n", (double)a / b);
    return 0;
}
