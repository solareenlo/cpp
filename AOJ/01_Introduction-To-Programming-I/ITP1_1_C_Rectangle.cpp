#include <iostream>
using namespace std;

int a, b;
int area, length;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b;
    area = a * b;
    length = a + a + b + b;

    cout << area << ' ' << length << '\n';
    return 0;
}
