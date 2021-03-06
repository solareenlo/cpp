#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int> > v(n, vector<int>(k));
	REP(i, n) REP(j, k) cin >> v[i][j];

	vector<vector<mint> > dp(n, vector<mint>(k + 1, 0));
	REP(i, k) dp[0][i] = 1;

	for (int i = 1; i < n; i++) {
		mint sum = 0;
		int l = 0;
		REP(j, k) {
			while (l < k && v[i-1][l] <= v[i][j]) {
				sum += dp[i-1][l];
				l++;
			}
			dp[i][j] = sum;
		}
	}
	mint res = 0;
	REP(i, k) res += dp[n-1][i];
	cout << res.val() << '\n';
	return 0;
}
