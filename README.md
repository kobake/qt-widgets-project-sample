# qt-widgets-project-sample
[Qt Creator](https://www.qt.io/) によるクロスプラットフォームなデスクトップ GUI アプリケーションの動作実験。

プロジェクト種別は「Qt Widgets Application」。

## 検証環境について
- CentOS 6.6 上の Qt Creator 4.2.0 にてプロジェクトを作成。
- Windows 10 上の Qt Creator 4.2.0 にてプロジェクトを編集。（ボタン設置、ラベル設置、クリックイベント処理の追加）
- 両環境にて動作を確認。

## CentOS で必要なもの
- Python 2.7 以上
- gdb 7.0 以上
- gcc 4.8 くらい？ (まだちゃんと確認してない。4.4 ではダメだった。4.8.5 はイケた)
- [Qt Creator 4.2](https://www.qt.io/)

## Windows で必要なもの
- Visual Studio 2015 (コンパイラを利用)
- [Windows Driver Kit (WDK) 10](https://developer.microsoft.com/en-us/windows/hardware/windows-driver-kit) (デバッグ実行するために必要。これが無くても通常実行はできる)
- [Qt Creator 4.2](https://www.qt.io/)

## Screenshot
![screenshot](https://raw.githubusercontent.com/kobake/qt-widgets-project-sample/master/screenshots/screenshot.jpg)
