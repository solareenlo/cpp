#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = n; i > 0; i--) {
        cout << a[i - 1];
        if ((i - 1) != 0) {
            cout << ' ';
        } else {
            cout << '\n';
        }
    }
    return 0;
}
