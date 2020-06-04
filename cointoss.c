#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int coin;                                    //コインの目（表か裏かを表す数値）を保存する変数
    int player;                                  //プレイヤーが選択した目（表か裏かを表す数値）を保存する変数

    srand((unsigned)time(NULL));
    coin = rand() % 2 + 1;                        //コインの目（表は１で裏は２）を決定する

    printf("表裏どっち？ 表:1 裏:2を入力 > ");
    scanf("%d", &player);                        //プレイヤーが表か裏かを選択入力する
    if(coin == 1)
        {printf("コインは表\n");}                 //コインの目を表示する
    else
        {printf("コインは裏\n");}

    if(player == coin)
        {printf("当たりです\n");}                 //ゲーム結果を表示する
    else
        {printf("はずれです\n");}

    return 0;
}
    