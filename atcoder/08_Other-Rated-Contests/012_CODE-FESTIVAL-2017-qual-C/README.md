# [CODE FESTIVAL 2017 qual C](https://atcoder.jp/contests/code-festival-2017-qualc/tasks)

## [B - Similar Arrays](https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b)
- `答え = pow(3, n) - 全部が奇数になる個数 = 全ての積が偶数になる`
- `全部が奇数になる個数 = pow(2, 偶数の個数)`
    - 偶数の両脇は奇数だから
- 元の数全てが奇数の時は，`-1` しないといけいないけど，ちょうど `pow(2, 0) = 1` になるので，
    ```bash
    答え = pow(3, n) - 全部が奇数になる個数
         = pow(3, n) - pow(2, 偶数の個数)
         = 全ての積が偶数になる
    ```
    が成り立つ．
