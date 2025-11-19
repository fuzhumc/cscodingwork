#include <bits/stdc++.h>

using namespace std;

void sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;(j>=0)&&(a[j]<temp);j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}

int main()
{
    int arr[20];
    srand(time(0));
    for(int i=0;i<20;i++) arr[i]=rand()%101;
    sort(arr,20);
    for(int i=0;i<20;i++) cout<<arr[i]<<endl;
    return 0;
}