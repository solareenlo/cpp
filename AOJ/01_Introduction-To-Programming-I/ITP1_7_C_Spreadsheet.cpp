#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r, c;
    cin >> r >> c;

    int sheet[r + 1][c + 1];
    REP(i, r + 1) REP(j, c + 1) {
        sheet[i][j] = 0;
    }

    REP(i, r) REP(j, c) {
        cin >> sheet[i][j];
    }

    REP(i, r) REP(j, c) {
        sheet[i][c] += sheet[i][j];
    }

    REP(j, c + 1) REP(i, r) {
        sheet[r][j] += sheet[i][j];
    }

    REP(i, r + 1) {
        REP (j, c + 1) {
            cout << sheet[i][j];
            if (j != c) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
