#include <iostream>
#include <vector>
#include <utility>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T>
inline vector<pair<T, T> > primeFactorize(T n) {
    vector<pair<T, T> > res;
    for (T a = 2; a * a <= n; a++) {
        if (n % a != 0) continue ;
        T ex = 0;
        while (n % a == 0) {
            ++ex;
            n /= a;
        }
        res.push_back({a, ex});
    }
    if (n != 1) res.push_back({n, 1});
    return res;
}

int main() {
	int n; cin >> n;
	cout << n << ":";
    const auto &res = primeFactorize(n);
    for (auto p : res)
        REP(i, p.second)
            cout << ' ' << p.first;
    cout << '\n';
	return 0;
}
