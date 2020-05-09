#include <iostream>
using namespace std;

int W, H, x, y, r;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> W >> H >> x >> y >> r;

    int diff_x = W - x;
    int diff_y = H - y;

    if (x < 0 || y < 0) {
        cout << "No" << '\n';
    } else if (diff_x >= r && diff_y >= r) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}
