![](https://user-images.githubusercontent.com/15243878/177044904-e031aa1c-d9af-4f63-8114-1545615b4ac3.png)

![](https://user-images.githubusercontent.com/15243878/238657282-0c15e168-0018-4a7d-be3d-54d805e002bd.jpg)

## 主な機能

- 日付（年／月／日／曜日）と時刻（時／分／秒）の表示
- 日時の手動設定
- 省電力モード搭載

![](https://user-images.githubusercontent.com/15243878/238655670-18d601d9-3375-435b-b11c-c1c0aa022212.png)

## 日時の合わせ方

![](https://user-images.githubusercontent.com/15243878/177044387-46d0e0c2-5d49-4852-a0ce-c6cadbb0c2ab.png)

## 省電力モードについて

節電のため、無操作状態が 5 秒間続くと画面が暗くなります。  
再び画面を明るくするには、A ボタンを押します。

## バージョン情報の表示

B ボタンを長押しすると、バージョン情報が表示されます。  
A ボタンを押すと次のページに進み、B ボタンで通常画面に戻ります。

## 画像変換ツール

本リポジトリには、PNG 画像を C 言語ヘッダ `*.h` へ変換するツールを同梱しています。  
`./tools/img/` フォルダに画像を格納し、

```shell
$ cd tools
$ python png2h.py
```

を実行してください。

## ライセンス

MIT

詳しくは `LICENSE` ファイルをご確認ください。
