#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define P 0.47

int count_neighbour(int M,int N,char (*lifeMatrix)[N],int i,int j)
{
    int count = 0;
    if (i > 0 && lifeMatrix[i-1][j] == '*') count++;
    if (i < M-1 && lifeMatrix[i+1][j] == '*') count++;
    if (j > 0 && lifeMatrix[i][j-1] == '*') count++;
    if (j < N-1 && lifeMatrix[i][j+1] == '*') count++;
    return count;
}

void evolution1(int M,int N,char (*lifeMatrix)[N])
{
    char (*temp)[N]=(char (*)[N])malloc(M*N*sizeof(char));
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) temp[i][j]=lifeMatrix[i][j];
    int count;
    for(int i=0;i<M;i++) for(int j=0;j<N;j++)
    {
        count=count_neighbour(M,N,temp,i,j);
        if(temp[i][j]=='*')
        {
            if(count<2||count>3) lifeMatrix[i][j]='-';
            else lifeMatrix[i][j]='*';
        }
        else
        {
            if(count==3) lifeMatrix[i][j]='*';
            else lifeMatrix[i][j]='-';
        }   
    }
    free(temp);
}

void evolution( int M,int N,char (* lifeMatrix)[N], int n)
{
    for(int k=0;k<n;k++) evolution1(M,N,lifeMatrix);
}

int main()
{
    int M,N,n;
    scanf("%d%d%d",&M,&N,&n);
    char (*a)[N]=(char (*)[N])malloc(M*N*sizeof(char));
    evolution(M,N,a,n);
    srand(time(NULL));
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) a[i][j]=(0.01*(rand()%100)<=P)?'*':'-';
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    free(a);
    return 0;
}