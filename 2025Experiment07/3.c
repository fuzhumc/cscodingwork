#include<stdio.h>

double variance(double *x, int n)
{
    double av;
    for(int i=0;i<n;i++) av+=x[i];
    av/=n;
    double var;
    for(int i=0;i<n;i++) var+=(x[i]-av)*(x[i]-av);
    return var/(n-1);
}

int main()
{
    int n;
    double arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lf", &arr[i]);
    printf("%lf\n",variance(arr,n));
    return 0;
}