#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string W;
    cin >> W;

    int count = 0;
    while (1) {
        string tmp;
        cin >> tmp;
        if (tmp == "END_OF_TEXT") {
            break ;
        }
        std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
        if (tmp.size() == W.size() ) {
            if (tmp.find(W) != std::string::npos) {
                count++;
            }
        }
    }
    cout << count << '\n';
    return 0;
}
