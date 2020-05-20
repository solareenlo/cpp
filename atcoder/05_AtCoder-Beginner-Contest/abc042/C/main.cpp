#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long K, std::vector<long long> D){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> D(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&D[i]);
    }
    solve(N, K, std::move(D));
    return 0;
}
