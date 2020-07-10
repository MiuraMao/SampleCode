#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <windows.h>

const int max = 3;      //びんの最大取得数

int getPlayer(void);
int getComputer(const int *);

int main(void){
    int bin_max;        //最初のびんの数
    int bin;            //残りのびんの数
    int p_turn = 0;     //1のときプレイヤーの取る番
    int i;

    srand((unsigned)time(NULL));
    bin_max = rand() % 5 + 20;
    bin = bin_max;

    printf("【びんとりゲーム】\n");
    printf("交互に１～３本のびんを取り、最後の１本取らせた方が勝ち\n");
    printf("びんの本数：%d\n", bin_max);
    printf("先攻 [1] / 後攻　[0] > ");

    scanf("%d", &p_turn);
    printf("==============あなたの");
    if(p_turn == 1){ printf("先攻"); }
    else{
        p_turn = 0;
        printf("後攻");
    }
    printf("でスタート==============\n");

    for(; bin > 1; p_turn = !p_turn){
        if(p_turn){
            bin -= getPlayer();
            if(bin <= 0){ printf("0になっちゃったよ・・・\n"); }
        }else{
            bin -= getComputer(&bin);
        }
        if(bin > 1){
            for(i = 0; i < bin_max; i++){
                if(i < bin_max - bin){ printf("□"); }
                else{ printf("■"); }
            }
            printf(" あと %d 本！ \n", bin);
        }
    }
    printf("\n====================ゲーム終了====================\n");
    if((p_turn) || (!p_turn && (bin < 0))){
        printf("あなたの負け！また挑戦してね！\n");
    }else{ printf("あなたの勝ち！\n"); }
    return 0;
}

int getPlayer(void){
    int p_get = 0;
    do{
        printf("何本取りますか？ > ");
        scanf("%d", &p_get);
    }while((p_get < 1) || (p_get > max));
    return p_get;
}

int getComputer(const int *bin){
    int c_get = 0;
    if(*bin <= max + 1){ c_get = *bin - 1; }
    else{ c_get = rand() % max + 1; }
//    Sleep(1000);
    printf("コンピュータ> %d 本取ったぞ！\n", c_get);
    return c_get;
}



