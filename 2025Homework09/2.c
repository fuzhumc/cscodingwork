#include<stdio.h>

void four_corner(int n, int a[n][n])
{
    int m1,m2,m3,m4;
    m1=a[0][0];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m1>a[i][j]) m1=a[i][j];
    m2=m1+1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m2>a[i][j]) if(m1!=a[i][j]) m2=a[i][j];
    m3=m2+1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m3>a[i][j]) if(m1!=a[i][j]) if(m2!=a[i][j]) m3=a[i][j];
    m4=m3+1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(m4>a[i][j]) if(m1!=a[i][j]) if(m2!=a[i][j]) if(m3!=a[i][j]) m4=a[i][j];
    a[0][0]=m1;
    a[0][n-1]=m2;
    a[n-1][0]=m3;
    a[n-1][n-1]=m4;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    four_corner(n,arr);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}