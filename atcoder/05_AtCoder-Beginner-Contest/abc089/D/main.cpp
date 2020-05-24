#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long H, long long W, long long D, std::vector<std::vector<long long>> A, long long Q, std::vector<long long> L, std::vector<long long> R){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long D;
    scanf("%lld",&D);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    solve(H, W, D, std::move(A), Q, std::move(L), std::move(R));
    return 0;
}
