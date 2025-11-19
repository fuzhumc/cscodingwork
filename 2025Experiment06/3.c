#include<stdio.h>

int sumoffactors(int p,int fac[])
{
    int i,j,sum=0;
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        {
            fac[i]=i;
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    int n,f[100];
    scanf("%d",&n);
    printf("%d",sumoffactors(n,f));
    
    return 0;
}