#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(vec) (vec).begin(), (vec).end()
#define SUM(...) accumulate(ALL(__VA_ARGS__),0LL)
#define DSUM(...) accumulate(ALL(__VA_ARGS__),0.0)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 便利関数
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

const int INF = 2002002002;

void solve(long long x_a, long long y_a, long long x_b, long long y_b, long long x_c, long long y_c){

}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long x_a;
    scanf("%lld",&x_a);
    long long y_a;
    scanf("%lld",&y_a);
    long long x_b;
    scanf("%lld",&x_b);
    long long y_b;
    scanf("%lld",&y_b);
    long long x_c;
    scanf("%lld",&x_c);
    long long y_c;
    scanf("%lld",&y_c);
    solve(x_a, y_a, x_b, y_b, x_c, y_c);
    return 0;
}
