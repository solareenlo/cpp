#include <iostream>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int H, W;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        cin >> H >> W;
        if (H == 0 && W == 0) {
            break ;
        }
        REP(i, H) {
            REP(j, W) {
                cout << '#';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
