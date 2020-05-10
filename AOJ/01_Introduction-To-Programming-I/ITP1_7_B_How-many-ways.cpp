#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;

    while (1) {
        cin >> n >> x;
        if (n == 0 && x == 0) {
            break ;
        }
        int count = 0;
        for (int i = 1; i < n + 1; i++) {
            for (int j = i + 1; j < n + 1; j++) {
                for (int k = j + 1; k < n + 1; k++) {
                    if (i + j + k == x) {
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}
