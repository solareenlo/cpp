#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << '\n';
    return 0;
}
