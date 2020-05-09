#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

inline void findMissingCards(multimap<char, int> &cards, char c) {
    auto tmp = cards.equal_range(c);
    vector<int> vec(13);
    for (auto itr = tmp.first; itr != tmp.second; itr++) {
        vec.push_back(itr->second);
    }

    for (int i = 1; i <= 13; i++) {
        auto result = find(vec.begin(), vec.end(), i);
        if (result == vec.end()) {
            cout << c << ' ' << i << '\n';
        }
    }
    return ;
}

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    multimap<char, int> cards;
    for (int i = 0; i < n; i++) {
        char tmp;
        int num;
        cin >> tmp >> num;
        cards.emplace(tmp, num);
    }

    findMissingCards(cards, 'S');
    findMissingCards(cards, 'H');
    findMissingCards(cards, 'C');
    findMissingCards(cards, 'D');
    return 0;
}
