#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, long long Q, std::vector<long long> A){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, K, Q, std::move(A));
    return 0;
}
