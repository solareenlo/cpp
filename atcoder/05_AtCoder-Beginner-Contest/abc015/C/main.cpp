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


void solve(long long N, long long K, std::vector<std::vector<long long>> T){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<std::vector<long long>> T(N, std::vector<long long>(K));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < K ; j++){
            scanf("%lld",&T[i][j]);
        }
    }
    solve(N, K, std::move(T));
    return 0;
}
