#include <iostream>
using namespace std;

int a, b, c;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> a >> b >> c;

    int count = 0;

    for (int i = a; i < b + 1; i++) {
        if (c % i == 0) {
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}
