// 2つの整数の公約数のリストを取得する
#include <iostream>
#include <set>
using namespace std;

set<int> divisorList(int n) {
    set<int> div;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0){
            div.insert(i);
            if (i * i != n)
                div.insert(n / i);
        }
    }
    return div;
}

set<int> commonDivList(int a, int b) {
    set<int> aDiv = divisorList(a);
    set<int> bDiv = divisorList(b);
    set<int> res;
    set_intersection(aDiv.begin(), aDiv.end(),
            bDiv.begin(), bDiv.end(),
            inserter(res, res.end()));
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    set<int> cdl = commonDivList(a, b);

    for (auto i : cdl)
        cout << i << ' ';

    cout << '\n';
    return 0;
}
