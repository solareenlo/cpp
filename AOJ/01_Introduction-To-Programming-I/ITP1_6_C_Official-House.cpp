#include <iostream>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int building[4][3][10];
int n, b, f, r, v;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    REP(i, n) {
        cin >> b >> f >> r >> v;
        building[b - 1][f - 1][r - 1] += v;
    }

    REP(i, 4) {
        REP(j, 3) {
            REP(k, 10) {
                cout << ' ' << building[i][j][k];
            }
            cout << '\n';
        }
        if (i != 3) {
            cout << "####################" << '\n';
        }
    }
    return 0;
}
