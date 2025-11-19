#include <bits/stdc++.h>

using namespace std;

int main()
{
    int data1[10] = {1,2,3,4,5,6,7,8,10,9}; // 接近有序的测试数据集
    int data2[10] = {10,9,8,7,6,5,4,3,2,1}; // 逆序的测试数据集
    int comparisons1,comparisons2,moves1,moves2;
    comparisons1=comparisons2=moves1=moves2=0;
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=9;j>i;j--)
        {
            if(data1[j]<data1[j-1])
            {
                temp=data1[j];
                data1[j]=data1[j-1];
                data1[j-1]=temp;
                moves1+=3;
            }
            comparisons1++;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=9;j>i;j--)
        {
            if(data2[j]<data2[j-1])
            {
                temp=data2[j];
                data2[j]=data2[j-1];
                data2[j-1]=temp;
                moves2+=3;
            }
            comparisons2++;
        }
    }
    cout<<"comparisons1="<<comparisons1<<",moves1="<<moves1<<endl;
    cout<<"comparisons2="<<comparisons2<<",moves2="<<moves2<<endl;
    return 0;
}