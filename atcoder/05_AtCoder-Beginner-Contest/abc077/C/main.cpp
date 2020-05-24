#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
