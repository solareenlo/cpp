# [天下一プログラマーコンテスト2012 予選C](https://atcoder.jp/contests/tenka1-2012-qualC)

## [B - ロイヤルストレートフラッシュ](https://atcoder.jp/contests/tenka1-2012-qualC/tasks/tenka1_2012_10)
- 実装力 の問題．
- まずはカードを1枚ずつに分ける．
- そのカードを1枚ずつ見ていき，
	- 4つのマークごとにロイヤルストレートフラッシュに必要なカードかを見ていき，
	- それぞれのマークにとって不必要なカードは res[i] の配列に付け足していく．
	- 4つのマークのうちどれかでロイヤルストレートフラッシュが完成すると，
	- 不必要なを出力して終了．
