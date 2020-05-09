#include <iostream>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int count = 0;
    int num = 1;

    while (num) {
        cin >> num;
        if (num) {
            count++;
            cout << "Case " << count << ": " << num << '\n';
        }
    }
    return 0;
}
