#include<stdio.h>

int findMaxSum(int *a, int n)
{
    int max=a[0]+a[1]+a[2],result=0;
    for(int i=1;i<n-2;i++)
    {
        if(a[i]+a[i+1]+a[i+2]>max)
        {
            max=a[i]+a[i+1]+a[i+2];
            result=i;
        }
    }
    return result;
}

int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d\n",findMaxSum(arr,n));
    return 0;
}