#include <iostream>
using namespace std;

long long comb(long long n, long long r) {
    if (r * 2 > n) r = n - r;
    long long dividend = 1;
    long long divisor = 1;
    for (long long i = 1; i <= r; i++ ) {
        dividend *= (n - i + 1);
        divisor *= i;
    }
    return dividend / divisor;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, r;
    cin >> n >> r;

    cout << comb(n, r) << '\n';
    return 0;
}
