// 約数のリストを取得する
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> divisorsList(int n) {
    vector<int> div;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div.push_back(i);
            if (i * i != n)
                div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    return div;
}

int main() {
    int a;
    cin >> a;

    vector<int> div = divisorsList(a);

    for (int n : div)
        cout << n << ' ';
    cout << '\n';
    return 0;
}
