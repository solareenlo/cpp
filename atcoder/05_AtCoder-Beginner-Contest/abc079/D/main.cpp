#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long H, long long W, std::vector<std::vector<long long>> c, std::vector<std::vector<long long>> A){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<std::vector<long long>> c(9-0+1, std::vector<long long>(9-0+1));
    for(int i = 0 ; i < 9-0+1 ; i++){
        for(int j = 0 ; j < 9-0+1 ; j++){
            scanf("%lld",&c[i][j]);
        }
    }
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    solve(H, W, std::move(c), std::move(A));
    return 0;
}
