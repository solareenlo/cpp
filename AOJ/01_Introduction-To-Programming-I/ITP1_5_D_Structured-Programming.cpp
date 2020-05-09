#include <iostream>
using namespace std;

bool ft_print_num(int n) {
    if (n == 0) {
        return false;
    } else if (n % 10 == 3) {
        return true;
    }
    return ft_print_num(n / 10);
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        if (i % 3 == 0) {
            cout << ' ' << i;
        } else if (ft_print_num(i)) {
            cout << ' ' << i;
        }
    }
    cout << '\n';
    return 0;
}
