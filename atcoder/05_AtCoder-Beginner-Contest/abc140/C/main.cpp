#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<long long> B){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(B));
    return 0;
}
