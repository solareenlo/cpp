#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string num;

    while (1) {
        cin >> num;
        if (num == "0") {
            break ;
        }
        int sum = 0;
        for (int i = 0; i < num.size(); i++) {
            sum += num[i] - '0';
        }
        cout << sum << '\n';
    }
    return 0;
}
