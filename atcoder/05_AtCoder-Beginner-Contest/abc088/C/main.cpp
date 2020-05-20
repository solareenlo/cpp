#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(std::vector<std::vector<long long>> c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::vector<std::vector<long long>> c(3, std::vector<long long>(3));
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            scanf("%lld",&c[i][j]);
        }
    }
    solve(std::move(c));
    return 0;
}
