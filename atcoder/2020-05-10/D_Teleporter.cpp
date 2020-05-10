#include "bits/stdc++.h"
using namespace std;
#define REP(i, n) for(int i = 0; i < (n); i++)

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }

    vector<int> s;
    // 訪れていないところが -1
    vector<int> loop(n + 1, -1); // ループの部分
    int tail = 0; // ループに入るまでの部分
    int period = 1; // 周期
    {
        int v = 1;
        // 訪れていないなら while 文を回す
        while (loop[v] == -1) {
            loop[v] = s.size();
            s.push_back(v);
            v = a[v - 1];
        }
        period = s.size() - loop[v];
        tail = loop[v];
    }

    if (k < tail) {
        cout << s[k] << '\n';
    } else {
        k -= tail;
        k %= period;
        cout << s[tail + k] << '\n';
    }
    return 0;
}
