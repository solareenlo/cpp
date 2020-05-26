#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long M, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> d){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> a(Q);
    std::vector<long long> b(Q);
    std::vector<long long> c(Q);
    std::vector<long long> d(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        scanf("%lld",&c[i]);
        scanf("%lld",&d[i]);
    }
    solve(N, M, Q, std::move(a), std::move(b), std::move(c), std::move(d));
    return 0;
}
