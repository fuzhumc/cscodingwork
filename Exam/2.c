#include<stdio.h>
#include<string.h>

int main() {
    int a[20],k,result,summax,sumtemp;
    scanf("%d",&k);
    for(int i=0;i<20;i++) scanf("%d",a+i);
    result=0;
    summax=0;
    for(int i=0;i<k;i++) summax+=a[i];
    for(int i=1;i<20;i++)
    {
        sumtemp=0;
        for(int j=0;j<k;j++) sumtemp+=a[(i+j)%20];
        if(sumtemp>summax)
        {
            summax=sumtemp;
            result=i;
        }
    }
    printf("%d\n",result);

    return 0;
}