#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve(std::string s){
    REP(i, s.size()) {
        int count = 0;
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) count++;
            else break ;
        }
        cout << s[i] << count + 1;
        i += count;
    }
    cout << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
