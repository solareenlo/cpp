#include <iostream>
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int A[n][m];
    REP(i, n) REP(j, m) {
        int tmp;
        cin >> tmp;
        A[i][j] = tmp;
    }

    int B[m];
    REP(i, m) {
        int tmp;
        cin >> B[i];
    }

    int result[n];
    REP(i, n) {
        result[i] = 0;
    }
    REP(i, n) REP(j, m) {
        result[i] += A[i][j] * B[j];
    }

    REP(i, n) {
        cout << result[i] << '\n';
    }
    return 0;
}
