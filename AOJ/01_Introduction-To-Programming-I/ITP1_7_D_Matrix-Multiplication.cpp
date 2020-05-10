#include <iostream>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, l;
    cin >> n >> m >> l;

    long long A[n][m];
    REP(i, n) REP(j, m) {
        long long tmp;
        cin >> tmp;
        A[i][j] = tmp;
    }

    long long B[m][l];
    REP(i, m) REP(j, l) {
        long long tmp;
        cin >> tmp;
        B[i][j] = tmp;
    }

    long long result[n][l];
    REP(i, n) REP(j, l) {
        result[i][j] = 0;
    }

    REP(i, n) REP(j, l) REP(k, m) {
        result[i][j] += A[i][k] * B[k][j];
    }

    REP(i, n) {
        REP(j, l) {
            cout << result[i][j];
            if (j != l - 1) {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
