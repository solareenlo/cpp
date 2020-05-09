#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    char op;

    while (1) {
        cin >> a >> op >> b;
        if (op == '?') {
            break ;
        } else if (op == '+') {
            cout << a + b << '\n';
        } else if (op == '-') {
            cout << a - b << '\n';
        } else if (op == '*') {
            cout << a * b << '\n';
        } else if (op == '/') {
            cout << a / b << '\n';
        }
    }
    return 0;
}
