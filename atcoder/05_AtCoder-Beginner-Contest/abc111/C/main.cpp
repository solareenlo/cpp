#include <iostream>
#include <map>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;


void solve(long long n, std::vector<long long> v){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    std::vector<long long> v(n);
    for(int i = 0 ; i < n ; i++){
        scanf("%lld",&v[i]);
    }
    solve(n, std::move(v));
    return 0;
}
