#include <bits/stdc++.h>

using namespace std;

void sort(int *a,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main()
{
    int a[20]={10,20,30,40,50,60,70,80,90,100};
    int b[10]= {1,43,72,23,9,87,54,3,55,0};
    for(int i=10;i<20;i++) a[i]=b[i-10];
    sort(a,20);
    for(int i=0;i<20;i++) cout<<a[i]<<endl;
    return 0;
}