#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, std::vector<long long> P, std::vector<long long> Y){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> P(M);
    std::vector<long long> Y(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&P[i]);
        scanf("%lld",&Y[i]);
    }
    solve(N, M, std::move(P), std::move(Y));
    return 0;
}
