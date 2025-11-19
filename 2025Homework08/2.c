#include<stdio.h>

void transpose(int matrix[][5])
{
    int i,j;
    int transpose[5][5];

    for(i=0;i<5;i++) for(j=0;j<5;j++) transpose[i][j]=matrix[j][i];
    for(i=0;i<5;i++) for(j=0;j<5;j++) matrix[i][j]=transpose[i][j];
}

int main()
{
    int a[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    transpose(a);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}