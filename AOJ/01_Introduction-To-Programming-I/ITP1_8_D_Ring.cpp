#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, p;
    cin >> s >> p;

    string tmp = s + s;
    if (tmp.find(p) == std::string::npos) {
        cout << "No" << '\n';
    } else {
        cout << "Yes" << '\n';
    }
    return 0;
}
