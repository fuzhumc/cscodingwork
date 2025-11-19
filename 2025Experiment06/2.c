#include<stdio.h>
#include<math.h>

long long int frac(int n)
{
    long long int result=1;
    for(int i=1;i<=n;i++) result*=i;
    return result;
}
double exp(double x)
{
    double result=1;
    for(int i=1;i<20;i++) result+=pow(x,i)/frac(i);
    return result;
}

int main()
{
    double x;
    scanf("%lf",&x);
    printf("%lf\n",exp(x));
    return 0;
}