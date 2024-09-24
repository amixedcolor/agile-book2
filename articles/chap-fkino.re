= ぼくのアジャイル Q&A 100本ノック

//flushright{
木下 史彦
//}

私はアジャイルコーチとして「アジャイル」に関連する質問を受けることがよくあります。ここでは、そのなかでも特に多く聞かれる質問をピックアップして紹介します。

ここに書いてあることが唯一の答え・正解というわけではありません。唯一の正解がないような質問をあえて選択しました。自分ならこう答える、自分たちのチームや組織ならこんなふうにしたほうがよいと考えたり、対話する目的で〓本節〓を活用してもらえると嬉しいです。

== ドキュメントに関する Q&A

@<strong>{Q：アジャイル開発であってもドキュメントは作成すべきでしょうか？}

A：ドキュメントと一言にいってもさまざまな種類のドキュメントがあります。手はじめに、現状作成しているドキュメントを次の3つに分類してみましょう。

 1. 引き継ぎのためのドキュメント
 2. 自己防衛のためのドキュメント
 3. コンプライアンスのためのドキュメント



ウォーターフォール開発のように開発のフェーズによってチームを分けないのであれば、引き継ぎのためのドキュメントは必要ないでしょう。


チームが信頼関係をもって仕事をできるなら、合意事項をこと細かに文書化し訴訟リスクに対応するような、自己防衛のためのドキュメントも必要ないでしょう。そんなドキュメントを作っている時間があったら、信頼関係を築くことに力を注いだほうが得です。


法令によって定められたドキュメントは作らないわけにはいきませんので、プロダクトバックログに積んでおきましょう。


これ以外にも重要なドキュメントはあります。ドキュメントは Word や Excel で書かれた形式的なドキュメントに限りません。例えば、コミットログや Pull Request のコメントも立派なドキュメントです。これらには「なぜ変更したのか」、あるいは「なぜしなかったのか」を記載しておくことで、ソフトウェアのメンテナンスが格段にやりやすくなります。

== プロダクトオーナーの役割に関する Q&A

@<strong>{Q：POが忙しすぎて役割をまっとうすることができません。どのような対策が考えられますか？}


A：まずPOの役割をいくつかに分割してみましょう。POの役割（ロール）はプロダクトの価値を最大化することですが、これを実現するために、「スクラムガイド」にはいくつかの仕事（ジョブ）が例として示されています。

 1. ビジョン・ゴールの伝達
 2. PBIの作成
 3. PBIの優先順位づけ
 4. PBLの見える化
 5. ステークホルダーマネジメント



そのうえでこれらの仕事を「POに絶対にやってもらいたいこと」と「PO以外のチーム全体で支援するできること」の2つに分けましょう。


例えば、ビジョン・ゴールがしっかりと伝わっていれば、PBIの作成やPBIの優先順位づけは開発者ができるかもしれません。PBIの細かな受入条件については、開発者が作成して、POが確認するというようにしてもよいでしょう。


『ビジョナリー・カンパニーZERO　ゼロから事業を生み出し、偉大で永続的な企業になる』（日経BP,2021）には OPUR（One Person Ultimately Responsible：最終責任を負う者）を任命すべきだと書かれています。POはまさにOPURだといえます。一方で、OPURと同じぐらい重要なのが、誰もが隣人のために「歩道を雪かきする」文化があることだと同書には書かれています。自分の仕事に対して完全な責任を引き受けつつ、お互いの歩道の雪かきを助ける文化が大切だということです。

== 見積り（時間とポイント）に関する Q&A

@<strong>{Q：時間の見積りとポイントの見積りのちがいがよくわかりません。相対的に見積もったとしても結局、時間に換算するのではないでしょうか？}


A：スクラムで見積りをするのはベロシティを計測することが目的です。 


少し長くなりますが、実例で解説します。


例えば、ある仕事（仕事A）があったときにそれを「3ポイント」と見積もり、その仕事をこなすのに結果的に6時間かかったとします。 1ヵ月後、仕事Aと同じような仕事Bをやることになりました。仕事Aをやったことでコツがわかっていたので、2時間でできそうだと思ったとします。ポイントも3分の1に減らして「1ポイント」にしました。 これをやってしまうとベロシティはどうなるでしょうか。6時間でこなせる仕事は「3ポイント」分のまま変わりません。


あくまでも規模を基準に、仕事Bを「3ポイント」と見積もるとどうなるでしょうか。3ポイントを2時間でこなすことができるのであれば、6時間あれば9ポイント分の仕事ができることになります。


前者（時間で見積もる）の問題点はベロシティの変化がわからなくなるという点です（時間で見積もっているのでベロシティは常に一定）。後者（規模で見積もる）なら、チームの改善が進んでベロシティがあがっているのか、それとも何かチームに課題があってベロシティが下がっているのかがわかります。

== ベロシティに関する Q&A

@<strong>{Q：ベロシティの考え方として、スプリント中に終わらなかったPBIは0としてペロシティにカウントしませんが、次のスプリントで終わらせた場合、そのストーリーのポイントを丸々カウントするのでしょうか？}
@<strong>{その場合、本当は2スプリントかけて終わらせたPBIが1スプリントの成果として計上されるのでベロシティが極端に上下しませんか？}


A：はい。上下してOKです。

スプリントで終わらなかったというのは異常な状態です。ベロシティが極端に上下することによって、その異常状態が見える化されます。

スクラムは問題を明るみに出すためのフレームワークです。問題がわかるのはよいことです。もしも、問題があるのに問題がないかのように取り繕おうとするなら、最初からスクラムを使わないほうがよいでしょう。

== スプリントに関する Q&A

@<strong>{Q：1週間のスプリントでは「出荷可能なインクリメント」を作成することができません。スプリント期間を2週間に延ばしてもよいものでしょうか？}


A：そういった理由でスプリント期間を延ばすことはおすすめしません。


スプリント期間中に出荷可能なインクリメントを作れないということはよくあります。しかし、それをよしとはせず「どうすれば1スプリントで出荷可能なインクリメントができるか」を考える改善のきっかけにしていくことが重要です。


改善のポイントは次のとおりです。

 * 開発スキルの向上
 * スウォーミング（全員でひとつのPBIに集中）
 * PBIをより細かく分割（抽象化能力、設計力、本質を見抜く力が必要）


スクラムは、問題を明るみに出すためのフレームワークです。スプリント期間を短くすることで、より多くの問題を明るみに出すことができます。スプリント期間を延ばすことによって、せっかく明るみに出した問題を覆い隠してしまってはいけません。

== メンバーのモチベーションに関する Q&A

@<strong>{Q：私はスクラムマスターです。スクラムイベントに積極的でないメンバーがいるのですが、どううながすとよいでしょうか？}


A：積極的になれない理由によって対応が変わってくると思います。積極的になれない理由と対応方法を表にまとめました。


//table[motivation][積極的になれない理由と対応方法]{
理由	対応方法
----------------------------
イベント趣旨や参加の仕方を単に知らない	スクラムやアジャイル開発に関するレクチャを行う
心理的安全性が確保されていなくて参加しづらい	ワーキングアグリーメントをメンバー全員で作る
特定の人が話しすぎることで会話に参加しづらい	ワーキングアグリーメントを決める@<br>{}話しすぎる人に対して個別にコーチングする
グループワークが苦手で会話に参加しづらい	ファシリテーションの工夫によって均等に話せるようにする@<br>{}　例）考える時間と発言の時間を分ける@<br>{}チェックイン・チェックアウトで参加のハードルを下げる
スクラムが嫌い、もしくはスクラムに疑いの目を持っている	スクラムマスターが困りごとを個別に1on1を行い、信頼関係作りからはじめる（スクラムをやってもらう前に、その人の関心ごとや困りごとを聞いて、抱えている問題を一緒に解決するような動きをするとうまくいく場合が多い）
SMとして積極的でないメンバーの内面状況がまったく予想できない	スクラムマスターが困りごとを個別に1on1を行い、信頼関係作りからはじめる
//}


== スクラム全般に関する Q&A

@<strong>{Q：何ができていたら、自分たちはスクラムができていることになりますか？}


A：逆に質問です。何ができていたら、料理ができることになりますか？

インスタントカレーが作れたらOK？ フランス料理のフルコースが作れる必要がある？ それとも、独自のレシピを発明する？ 調理師の資格は必要？ 料理に限らず、英語の学習、スポーツ、などなど……。

なんでも同じです。 スクラムも同じことです。スクラムができていることを目標にしてしまうと、いつまで経っても自信を持って「できています」といえるようにはならないでしょう。 目的にあわせて目指すべき達成度（目標）があるはずです。 目的にあわせて目標を自分たちで考えて決めていればよいと思います。


== ノックのつづき


アジャイルをやるなかでまだまだたくさんの悩みがあると思います。

「Agile Studio by 永和マネジメントシステム」では、「アジャイルカフェ@オンライン」として、視聴者の方から寄せられたアジャイルの悩みに答えるオンラインイベントを定期的に開催しています。みなさんの悩みにアジャイルコーチが「あーでもない、こーでもない」「これならいけそうかも」と解決策を楽しく考えていきます。このイベントでは、みなさんからの悩みを一緒になって考えていくので、ご参加をお待ちしています。

@<href>{https://www.agile-studio.jp/post/agile-cafe, https://www.agile-studio.jp/post/agile-cafe}


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/fkino.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        木下 史彦 @fkino https://twitter.com/fkino\\
        \end{minipage}
    \hspace{1ex}
//}


永和システムマネジメント Agile Studio アジャイルコーチ。

居飛車党、ニコン党、日本酒党。純米酒をあたためて呑むのが好きです。
