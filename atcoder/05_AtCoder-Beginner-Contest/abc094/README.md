# [AtCoder Beginner Contest 094](https://atcoder.jp/contests/abc094/tasks)

## [C - Many Medians](https://atcoder.jp/contests/abc094/tasks/arc095_a)
- ソートした中で対象物が何番目かを数えれば良い．
- ソートした中で対象物が `n / 2` よりも前にあるのであれば，median は1つ後ろにずれる．
- ソートした中で対象物が `n / 2 + 1` よりも後ろにあるのであれば，median は1つ前にずれる．
