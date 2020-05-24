#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long H, long long W, std::vector<std::string> s){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<std::string> s(W);
    for(int i = 0 ; i < W ; i++){
        std::cin >> s[i];
    }
    solve(H, W, std::move(s));
    return 0;
}
