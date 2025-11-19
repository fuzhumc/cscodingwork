#include<stdio.h>

int run(int y)
{
    if(y%400==0) return 1;
    else if(y%100==0) return 0;
    else if(y%4==0) return 1;
    else return 0;
}

int day_of_year(int year,int month,int day)
{
    int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    if(run(year))
    {
        if(month==2&&day==29) return 60;
        else if(month>=3) return a[month-1]+day+1;
        else return a[month-1]+day;
    }
    return a[month-1]+day;
}

int main()
{
    int y,m,d;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char c;
    scanf("%d%c%d%c%d",&y,&c,&m,&c,&d);
    if(y<0||m<0||d<0)
    {
        printf("Error!\n");
        return 0;
    }
    if(run(y)&&m==2&&d>29)
    {
        printf("Error!\n");
        return 0;
    }
    if(d>a[m-1])
    {
        printf("Error!\n");
        return 0;
    }
    printf("%d\n",day_of_year(y,m,d));
    return 0;
}