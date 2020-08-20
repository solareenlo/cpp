# [AtCoder Beginner Contest 160](https://atcoder.jp/contests/abc160)

## [D - Line++](https://atcoder.jp/contests/abc160/tasks/abc160_d)
- パターン発見
- 点 i から 点 j までの行き方の以下の3通りの最小値の個数が答え．
	- `i → j` = `abs(i - j)`
	- `i → X → Y → j` = `abs(i - X) + 1 + abs(Y - j)`
	- `i → Y → X → j` = `abs(i - Y) + 1 + abs(X - j)`
