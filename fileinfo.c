#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main(void){
    struct _stat st;
    struct tm *t_st;

    if(_stat("fileinfo.c", &st) == 0){
        printf("ディスクのドライブID ： %d\n", st.st_dev);
        printf("所有者のユーザID ： %d\n", st.st_uid);
        printf("所有者のグループID ： %d\n", st.st_gid);
        printf("ファイルサイズ ： %d\n", st.st_size);
        t_st = localtime(&st.st_ctime);
        printf("ファイル作成時刻 ： %d/%02d/%02d %02d:%02d:%02d\n",
            t_st->tm_year+1900, t_st->tm_mon+1, t_st->tm_mday, 
            t_st->tm_hour, t_st->tm_min, t_st->tm_sec);
        t_st = localtime(&st.st_atime);
        printf("最終アクセス時刻 ： %d/%02d/%02d/%02d %02d:%02d:%02d\n",
            t_st->tm_year+1900, t_st->tm_mon+1, t_st->tm_mday, 
            t_st->tm_hour, t_st->tm_min, t_st->tm_sec);
        t_st = localtime(&st.st_mtime);
        printf("最終更新時刻 ： %d/%02d/%02d %02d:%02d:%02d\n",
            t_st->tm_year+1900, t_st->tm_mon+1, t_st->tm_mday,
            t_st->tm_hour, t_st->tm_min, t_st->tm_sec);
    }
    return 0;
}