#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long H, long long N, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(H, N, std::move(A), std::move(B));
    return 0;
}
