#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long K, long long N, std::vector<long long> A){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long K;
    scanf("%lld",&K);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(K, N, std::move(A));
    return 0;
}
