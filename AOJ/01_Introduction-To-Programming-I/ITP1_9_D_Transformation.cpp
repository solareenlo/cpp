#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    int n;
    cin >> n;
    REP(i, n) {
        string order;
        cin >> order;
        if (order == "print") {
            int a, b;
            cin >> a >> b;
            cout <<  str.substr(a, b - a + 1) << '\n';
        }
        if (order == "reverse") {
            int a, b;
            cin >> a >> b;
            reverse(str.begin() + a, str.begin() + b + 1);
        }
        if (order == "replace") {
            int a, b;
            cin >> a >> b;
            string tmp;
            cin >> tmp;
            str.replace(a, b - a + 1, tmp);
        }
    }
    return 0;
}
