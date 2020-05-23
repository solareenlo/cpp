#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, long long Q, std::vector<long long> l, std::vector<long long> r){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> l(Q);
    std::vector<long long> r(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
    }
    solve(N, Q, std::move(l), std::move(r));
    return 0;
}
