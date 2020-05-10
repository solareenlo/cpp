#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m, f, r;
    int sum = 0;
    while (1) {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1) {
            break ;
        }
        sum = m + f;
        if (m == -1 || f == -1) {
            cout << 'F' << '\n';
        } else if (sum >= 80) {
            cout << 'A' << '\n';
        } else if (sum >= 65) {
            cout << 'B' << '\n';
        } else if (sum >= 50) {
            cout << 'C' << '\n';
        } else if (sum >= 30) {
            if (r >= 50) {
                cout << 'C' << '\n';
            } else {
                cout << 'D' << '\n';
            }
        } else {
            cout << 'F' << '\n';
        }
    }
    return 0;
}
