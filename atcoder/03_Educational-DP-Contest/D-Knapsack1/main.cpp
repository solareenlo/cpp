#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, W;
    cin >> N >> W;
    vector<int> w(N), v(N);
    REP(i, N) cin >> w[i] >> v[i];

    vector<vector<ll> > dp(N + 1, vector<ll>(W + 1, 0));

    REP(i, N) REP(j, W + 1) {
        if (j - w[i] >= 0)
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
    }

    cout << dp[N][W] << '\n';
    return 0;
}
