#include <bits/stdc++.h>

using namespace std;

struct student
{
    int a,b,c;
    double av;
    string s;
};

void sort(struct student *a,int n)
{
    struct student temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j].av>=a[j-1].av)
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
    struct student arr[50];
    int count=0;
    freopen("score50.txt","r",stdin);
    for(int i=0;i<50;i++)
    {
        cin>>arr[i].s>>arr[i].a>>arr[i].b>>arr[i].c;
        arr[i].av=1.0*(arr[i].a+arr[i].b+arr[i].c)/3;
    }
    for(int i=0;i<50;i++) cout<<arr[i].s<<arr[i].av<<endl;
    for(int i=0;i<50;i++) if(arr[i].av>=85) count++;
    cout<<count<<endl;
    sort(arr,50);
    for(int i=0;i<50;i++) cout<<arr[i].s<<arr[i].av<<endl;
    return 0;
}