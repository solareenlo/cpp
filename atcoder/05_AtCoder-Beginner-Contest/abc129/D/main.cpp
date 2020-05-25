#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long H, long long W, std::vector<std::string> S){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<std::string> S(H);
    for(int i = 0 ; i < H ; i++){
        std::cin >> S[i];
    }
    solve(H, W, std::move(S));
    return 0;
}
