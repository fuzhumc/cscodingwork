#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int b[5][3]={
        {3,0,16},
        {17,-6,9},
        {0,23,-4},
        {9,7,0},
        {4,13,11}
    };
    int c[5][3]={0};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<5;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
    