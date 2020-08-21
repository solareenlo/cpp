# [三井住友信託銀行プログラミングコンテスト2019](https://atcoder.jp/contests/sumitrust2019/tasks)

## [C - 100 to 105](https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_c)
### 「100円から105円」の性質を使う解放
- x を100で割った商 `div` が `0 ~ 5` の数字を使える個数となる．
- ので，`x <= 100 * div && x >= 105 * div` の範囲に x が存在すれば，答えは true となる．

### 動的計画法を使う解法
- `dp[i]` を「i円の買い物ができるなら true，できないなら false 」とする．
- `dp[0] = true;` として，
    - 100個前，101個前，102個前，103個前，104個前，105個前が true なら，自分も true とする．
    - と，`dp[x] = true;` なら，答えは true となる．
