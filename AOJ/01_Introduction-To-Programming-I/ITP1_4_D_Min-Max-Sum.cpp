#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> vec(n);
    REP(i, n) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    long long sum = accumulate(vec.begin(), vec.end(), 0LL);

    cout << vec[0] << ' ' << vec[n - 1] << ' ' << sum << '\n';
    return 0;
}
