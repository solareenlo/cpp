# AtCoder
- AtCoder の問題を C++ で解いたリポジトリ．

## 練習具合
- https://kenkoooo.com/atcoder/#/table/solareenlo

## References
### 便利ツール
#### 過去問に対して自動で push したり，入出力例を自動で試してくれたりするツール
- [kyuridenamida/atcoder-tools](https://github.com/kyuridenamida/atcoder-tools)

### ライブラリ
#### 競プロ C++ 用のライブラリ
- [atcoder-live/library](https://github.com/atcoder-live/library)
- [ei1333/library](https://github.com/ei1333/library)

#### 余りを簡単に求められる構造体
- [「1000000007 で割ったあまり」の求め方を総特集！ 〜 逆元から離散対数まで 〜](https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a)
- [modint 構造体を使ってみませんか？ \(C++\)](https://noshi91.hatenablog.com/entry/2019/03/31/174006)

### 解き方
- [競技プログラミングで解法を思いつくための典型的な考え方](https://algo-logic.info/how-to-think-cp/)

### 過去問は何分で解説を見れば良いか？

| 難易度 | 100点問題 | 200点問題 | 300点問題 | 400点問題 | 500点問題 | 600点問題 | 700点問題 | 800点問題 | 900点問題 |
|--------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| 茶色   | 5分       | 7分       | 30分      | 45分      | -         | -         | -         | -         | -         |
| 緑色   | 5分       | 5分       | 20分      | 35分      | 50分      | 120分     | -         | -         | -         |
| 水色   | 3 分      | 4 分      | 10 分     | 25 分     | 45 分     | 90 分     | 120 分    | -         | -         |
| 青色   | 2 分      | 3 分      | 6 分      | 20 分     | 40 分     | 80 分     | 100 分    | 120 分    | -         |
| 黄色   | 1 分      | 2 分      | 4 分      | 15 分     | 35 分     | 60 分     | 80 分     | 100 分    | 120 分    |
| 橙色   | 15 秒     | 1 分      | 3 分      | 10 分     | 30 分     | 45 分     | 60 分     | 80 分     | 110 分    |

### 進め方
- [AtCoder 版！蟻本 (発展的トピック編)](https://qiita.com/drken/items/0de3d205690d92307b7c)
- [AtCoder 版！蟻本 (上級編)](https://qiita.com/drken/items/9b311d553aa434bb26e4)
- [AtCoder 版！蟻本 (中級編)](https://qiita.com/drken/items/2f56925972c1d34e05d8)
- [AtCoder 版！蟻本 (初級編)](https://qiita.com/drken/items/e77685614f3c6bf86f44)
- [レッドコーダーが教える、競プロ・AtCoder上達のガイドライン【上級編：目指せレッドコーダー！】](https://qiita.com/e869120/items/acba3dd8649d913102b5)
- [レッドコーダーが教える、競プロ・AtCoder上達のガイドライン【中級編：目指せ水色コーダー！】](https://qiita.com/e869120/items/eb50fdaece12be418faa)
- [レッドコーダーが教える、競プロ・AtCoder上達のガイドライン【初級編：競プロを始めよう】](https://qiita.com/e869120/items/f1c6f98364d1443148b3)

### 競プロ独特の書き方
- [競技プログラミングにおけるコードの書き方とその利便性](https://www.slideshare.net/Roadagain/ss-71620380)
- [kurokoji さんの template.cpp の説明](https://github.com/kurokoji/.cpp-Template/wiki)

### 高速化テクニック
- [cin, cout は遅いのでそれぞれ違う書き方をする](https://qiita.com/blackcurrant/items/312ea2471900132fbd6a)
- [競プロで使える高速化テクニック](https://xuzijian629.hatenablog.com/entry/2019/03/31/130708)

### <bits/stdc++.h>
- [gcc/libstdc++-v3/include/precompiled/stdc++.h](https://github.com/gcc-mirror/gcc/blob/master/libstdc%2B%2B-v3/include/precompiled/stdc%2B%2B.h)

### 2020/05/31 の社長のぶっちゃけトークまとめ
- 企業コンテストだから問題が違うということはない．変わるレートの範囲が違うだけ．
- 実技検定は3回分のコンテストを一度に行って，一気にレートを付けようとする仕組み．
- でも，コンテストのレーティングがとても良い精度になっている．
- 今日で，php で作られていたページが全てなくなった．
- 今は go でページを作っている．
- タイピングで対応言語が出てくる．
- 今日明日で過去問の対応言語も現在のものと一緒になる．
- 競プロユーザー的には実装問題はディリカルティが高くなり，探索・数学的な問題のディフィカルティは低くなる．
- C, D の難易度が逆転する時がある．ゲーム性を持たせるため．点数からメタコンテストにならないようにするため．
- ARC, AGC は世界最高のクオリティで作ってる．
- ABC は初心者用にクオリティよりも，回数を増やして，教育的な意味を増やしてる．
- AtCoder 的には ARC, AGC が本気コンテスト．
