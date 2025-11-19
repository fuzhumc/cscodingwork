#include<stdio.h>

int sumoffactors(int p,int fac[])
{
    int i,j=0,sum=0;
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        {
            fac[j]=i;
            sum+=i;
            j++;
        }
    }
    return sum;
}

int main()
{
    int n,f[100]={0};
    scanf("%d",&n);
    printf("%d",sumoffactors(n,f));
    
    return 0;
}