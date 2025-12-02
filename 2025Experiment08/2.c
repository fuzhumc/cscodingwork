#include<stdio.h>
double inner_product(double *a, double *b, int n)
{
    double s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i]*b[i];
    }
    return s;
}

int main()
{
    int n;
    double a[50],b[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&b[i]);
    }
    printf("%lf\n",inner_product(a,b,n));
    return 0;
}