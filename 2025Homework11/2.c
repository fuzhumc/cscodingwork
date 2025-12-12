#include<stdio.h>

int main()
{
    char f1[20],f2[20],c1,c2;
    scanf("%s%s",f1,f2);
    int i,n1,n2;
    freopen(f1,"r",stdin);
    for(i=0;(c1=getchar())!=EOF;i++);
    n1=i;
    freopen(f2,"r",stdin);
    for(i=0;(c2=getchar())!=EOF;i++);
    n2=i;
    if(n1!=n2) 
    {
        printf("Different size: %d %d\n",n1,n2);
        return 0;
    }
    for(i=0;i<n1;i++)
    {
        freopen(f1,"r",stdin);
        for(int j=0;j<=i;j++) c1=getchar();
        freopen(f2,"r",stdin);
        for(int j=0;j<=i;j++) c2=getchar();
        if(c1!=c2)
        {
            printf("Different at %d\n",i);
            return 0;
        }
    }
    printf("Same file!\n");
    return 0;
}