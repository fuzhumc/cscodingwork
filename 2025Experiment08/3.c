#include<stdio.h>
#include<stdlib.h>

void generate_magic_square(int n, int (*magic_square)[n])
{
    int i=0,j=n/2;
    int inext,jnext;
    for(int k=1;k<=n*n;k++)
    {
        magic_square[i][j]=k;
        inext=(i-1+n)%n;
        jnext=(j+1)%n;
        if(magic_square[inext][jnext]!=0)
        {
            inext=(i+1)%n;
            jnext=j;
        }
        i=inext;
        j=jnext;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int (*a)[n]=(int (*)[n])malloc(n*n*sizeof(int));
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) a[i][j]=0;
    generate_magic_square(n,a);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    free(a);
    return 0;
}