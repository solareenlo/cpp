#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

inline ll powmod(ll x, ll y) {
	ll res = 1;
	while (y--)
		res = res * x % MOD;
	return res;
}

int main() {
	ll n; cin >> n;
	ll res = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);
	res %= MOD;
	res = (res + MOD) % MOD;
	cout << res << '\n';
    return 0;
}
