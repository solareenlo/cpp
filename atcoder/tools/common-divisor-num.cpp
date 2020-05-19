// 公約数の個数を取得する
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int commonDivNum(int a, int b) {
    int n = gcd(a, b);

    int res;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                res += 1;
            else
                res += 2;
        }
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << commonDivNum(a, b) << '\n';
    return 0;
}
