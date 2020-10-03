#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

inline ll powmod(ll a, ll n) {
	ll res = 1;
	while (n) {
		if (n & 1) res = res * a % MOD;
		a = a * a % MOD;
		n >>= 1;
	}
	return res;
}

int main() {
	ll m, n; cin >> m >> n;
	cout << powmod(m, n) << '\n';
	return 0;
}
