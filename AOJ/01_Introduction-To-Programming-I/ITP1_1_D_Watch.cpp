#include <iostream>
using namespace std;

int S;
int h, m, s;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> S;

    h = S / 3600;
    m = (S % 3600) / 60;
    s = (S % 60);

    cout << h << ':' << m << ':' << s << '\n';
    return 0;
}
