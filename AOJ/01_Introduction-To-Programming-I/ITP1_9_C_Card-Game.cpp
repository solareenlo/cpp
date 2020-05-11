#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int sum_taro = 0;
    int sum_hanako = 0;
    REP(i, n) {
        string taro, hanako;
        cin >> taro >> hanako;
        if (taro == hanako) {
            sum_taro++;
            sum_hanako++;
        } else if (taro > hanako) {
            sum_taro += 3;
        } else {
            sum_hanako += 3;
        }
    }

    cout << sum_taro << ' ' << sum_hanako << '\n';
    return 0;
}
