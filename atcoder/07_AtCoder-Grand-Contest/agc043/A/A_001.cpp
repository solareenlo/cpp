#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MAXI = 110;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w; cin >> h >> w;
	vector<vector<char> > s(h + 1, vector<char>(w + 1));
	REP(i, h) REP(j, w)
		cin >> s[i+1][j+1];

	vector<vector<int> > dp(MAXI, vector<int>(MAXI, INT_MAX));
	dp[1][1] = (s[1][1] == '#');

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (i * j != 1) {
				dp[i][j] = min(dp[i-1][j]+(s[i][j]=='#'&&s[i-1][j]=='.'), dp[i][j-1]+(s[i][j]=='#'&&s[i][j-1]=='.'));
			}
		}
	}
	cout << dp[h][w] << '\n';
    return 0;
}
