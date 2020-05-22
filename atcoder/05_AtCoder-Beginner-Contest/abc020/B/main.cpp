#include <iostream>
using namespace std;

void solve(long long A, long long B){
    string tmp = to_string(A) + to_string(B);
    int ans = stoi(tmp);
    cout << ans * 2 << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
