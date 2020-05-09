#include <iostream>
using namespace std;

int x, y;
int tmp;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break ;
        }
        if (x > y) {
            tmp = x;
            x = y;
            y = tmp;
        }
        cout << x << ' ' << y << '\n';
    }
    return 0;
}
