#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> C, std::vector<long long> S, std::vector<long long> F){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> C(N-1);
    std::vector<long long> S(N-1);
    std::vector<long long> F(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&S[i]);
        scanf("%lld",&F[i]);
    }
    solve(N, std::move(C), std::move(S), std::move(F));
    return 0;
}
