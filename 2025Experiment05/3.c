#include<stdio.h>
#define N 10

int get_array(int a[])
{
    int i=0;
    int num;
    while(i<N&&scanf("%d",&num))
    {
        a[i]=num;
        i++;
    }
    return i;
}

int is_asc_or_desc(int a[],int n)
{
    int p=0,q=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]) p=1;
        else if(a[i]>a[i+1]) q=1;
    }
    return p-q;
}

int main()
{
    int a[N];
    int n=get_array(a);
    printf("%d\n",is_asc_or_desc(a,n));
    return 0;
}