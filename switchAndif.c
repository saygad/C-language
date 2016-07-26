#include <stdio.h>
int main() 
{ 
    int year = 2008;
    int month = 8;
    int day = 8;
    int i,j;
    if(year%100==0&&year%400==0||year%4==0&&year%100!=0)i=1;
    else i=0;
    switch(month)
    {
        case 1:j=day;break;
        case 2:j=31+ day;break;
        case 3:j=31+ 28+ day;break;
        case 4:j=31+ 28+ 31+ day;break;
        case 5:j=31+ 28+ 31+ 30+ day;break;
        case 6:j=31+ 28+ 31+ 30+ 31+ day;break;
        case 7:j=31+ 28+ 31+ 30+ 31+ 30+ day;break;
        case 8:j=31+ 28+ 31+ 30+ 31+ 30+ 31+day;break;
        case 9:j=31+ 28+ 31+ 30+ 31+ 30+ 31+ 31+ day;break;
        case 10:j=31+ 28+ 31+ 30+ 31+ 30+ 31+ 31+ 30+day;break;
        case 11:j=31+ 28+ 31+ 30+ 31+ 30+ 31+ 31+ 30+ 31+day;break;
        case 12:j=31+ 28+ 31+ 30+ 31+ 30+ 31+ 31+ 30+ 31+ 30+ day;break;
    }
    if(i==1)j+=1;
    printf("%d年%d月%d日是该年的第%d天",year,month,day,j);
    return 0;
}