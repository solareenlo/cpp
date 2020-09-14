# [AtCoder Beginner Contest 178](https://atcoder.jp/contests/abc178)

# [D - Redistribution](https://atcoder.jp/contests/abc178/tasks/abc178_d)
- パターン発見
- S[i] = S[i-2] + S[i-3] + S[i-4]
- S[i] = S[i-1] + S[i-3]
- になっている．

## [C - Ubiquity](https://atcoder.jp/contests/abc178/tasks/abc178_c)
- ベン図 を考える問題．
- 全体は
	- `pow(10, N)` 通り
- `A[i] = 0` なる `i` が存在しない通りは
	- `pow(9, N)` 通り
- `A[i] = 9` なる `i` が存在しない通りは
	- `pow(9, N)` 通り
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` がともに存在しない通りは
	- `pow(8, N)` 通り
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` のどちらか一方しか存在しない通りは
	- `pow(9, N) + pow(9, N) - pow(8, N)` 通り
- よって，答えは
- `A[i] = 0` なる `i` と `A[i] = 9` なる `i` がともに存在する通りは
	- `pow(10, N) - pow(9, N) - pow(9, N) + pow(8, N)` 通り
