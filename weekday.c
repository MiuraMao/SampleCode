#include <stdio.h>
#include <time.h>

int main(void){
    struct tm t;
    time_t timer;
    struct tm *date;
    int year, month, day;
    char *wday[] = { "日","月","火","水","木","金","土" };

    printf("年を入力 > ");
    scanf("%d", &year);
    printf("月を入力 > ");
    scanf("%d", &month);
    printf("日を入力 > ");
    scanf("%d", &day);
    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = day;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
    t.tm_isdst = -1;

    timer = mktime(&t);
    date = localtime(&timer);
    printf("%04d年 %02d月 %02d日は %s曜日\n", 
    date->tm_year+1900, date->tm_mon+1, date->tm_mday, wday[date->tm_wday]);
    return 0;    
}