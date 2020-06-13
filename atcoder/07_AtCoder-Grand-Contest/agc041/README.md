# [AtCoder Grand Contest 041](https://atcoder.jp/contests/agc041/tasks)

## [A - Table Tennis Training](https://atcoder.jp/contests/agc041/tasks/agc041_a)
- A と B の差が 2 の倍数の時は，`(B - A) / 2` が答え．
- A と B の差が 1 の時は，`min(n - A, B - 1)` が答え．
    - つまり，単純に端っこに行った時が答え．
- A と B の差が 3 以上の奇数の場合，
    - 端っこに先に行った方が1つ戻ってあげた時が答え．
