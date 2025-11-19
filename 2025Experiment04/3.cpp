#include <bits/stdc++.h>

using namespace std;

int main()
{
    int data1[10] = {1,2,3,4,5,6,7,8,10,9}; // 接近有序的测试数据集
    int data2[10] = {10,9,8,7,6,5,4,3,2,1}; // 逆序的测试数据集
    int comparisons1,comparisons2,moves1,moves2;
    comparisons1=comparisons2=moves1=moves2=0;
    int temp;
    for(int i=1;i<10;i++)
    {
        int key=data1[i];
        moves1++;
        int j;
        for(j=i-1;j>=0&&key<data1[j];j--)
        {
            data1[j+1]=data1[j];
            comparisons1++;
            moves1++;
        }
        data1[j+1]=key;
        moves1++;
    }
    for(int i=1;i<10;i++)
    {
        int key=data2[i];
        moves2++;
        int j;
        for(j=i-1;j>=0&&key<data2[j];j--)
        {
            data2[j+1]=data2[j];
            comparisons2++;
            moves2++;
        }
        data2[j+1]=key;
        moves2++;
    }
    cout<<"comparisons1="<<comparisons1<<",moves1="<<moves1<<endl;
    cout<<"comparisons2="<<comparisons2<<",moves2="<<moves2<<endl;
    return 0;
}