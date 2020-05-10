#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        string str;
        cin >> str;
        if (str == "-") {
            break ;
        }

        int m;
        cin >> m;

        int h[m];
        REP(i, m) {
            cin >> h[i];
        }

        REP(i, m) {
            string tmp;
            tmp = str.substr(h[i], str.size()) + str.substr(0, h[i]);
            str = tmp;
        }
        cout << str << '\n';
    }
    return 0;
}
