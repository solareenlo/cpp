#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long n, std::vector<std::string> S){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    std::vector<std::string> S(n);
    for(int i = 0 ; i < n ; i++){
        std::cin >> S[i];
    }
    solve(n, std::move(S));
    return 0;
}
