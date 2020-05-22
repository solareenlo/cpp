#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}


void solve(long long N, long long D, long long K, std::vector<long long> L, std::vector<long long> R, std::vector<long long> S, std::vector<long long> T){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long D;
    scanf("%lld",&D);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> L(D);
    std::vector<long long> R(D);
    for(int i = 0 ; i < D ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    std::vector<long long> S(K);
    std::vector<long long> T(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&S[i]);
        scanf("%lld",&T[i]);
    }
    solve(N, D, K, std::move(L), std::move(R), std::move(S), std::move(T));
    return 0;
}
