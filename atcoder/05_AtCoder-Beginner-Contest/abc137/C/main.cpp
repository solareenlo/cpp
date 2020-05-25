#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long N, std::vector<std::string> s){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> s(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
    }
    solve(N, std::move(s));
    return 0;
}
