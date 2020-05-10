#include <iostream>
#include <map>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    map<char, int> alphabet;
    for (int i = 0; i < 26; i++) {
        alphabet.insert(make_pair('a' + i, 0));
    }

    string str;

    // getline(cin, str);
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            }
            if (str[i] >= 'a' && str[i] <= 'z') {
                alphabet[str[i]] += 1;
            }
        }
    }

    for (auto itr = alphabet.begin(); itr != alphabet.end(); itr++) {
        cout << itr->first << " : " << itr->second << '\n';
    }
    return 0;
}
