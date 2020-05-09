#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

vector<int> num(3);

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    REP(i, 3) {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    REP(i, 3) {
        if (i != 2) {
            cout << num[i] << ' ';
        } else {
            cout << num[i] << '\n';
        }
    }
    return 0;
}
