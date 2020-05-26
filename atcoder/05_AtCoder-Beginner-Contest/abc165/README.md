# [AtCoder Beginner Contest 165](https://atcoder.jp/contests/abc165/tasks)

## [D - Floor Function](https://atcoder.jp/contests/abc165/tasks/abc165_d)
- `mod 計算`の問題．
- 以下の2つの式を使用する．
    - `floor(A/B) = (A - (A % B)/B` --- (1)
    - `A*x % B = A*(x % B) % B` --- (2)
        - `mod はいつ取っても同じ値になる．`を使用している．

```bash
floo(A*x/B) - A*floor(x/B)
= (A*x - (A*x % B))/B - A*(x - (x % B))/B  [式(1)を使用する]
= (A*x - (A*x % B) - A*x + A*(x % B))/B  [展開するだけ]
= (A*(x % B) - (A*x % B))/B  [A*x を消して，入れ替えただけ]
= (A*(x % B) - A*(x % B)%B)/B  [式(2)を使用する]
= floor(A*(x % B)/B)  [式(1)の逆を行う]
```

- ここで `A, B ∈ 正の整数` は定数なので，`x % B` が最大化すれば良い．
    - `x ∈ N` において，`x = B - 1` のとき最大となるので，
    - `N ≧ B - 1` → `x = B - 1`
    - `N < B - 1` → `x = N`
