#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(1);
    int a[500];
    int count;
    double av1=0,av2=0;
    for(int i=0;i<500;i++) a[i]=rand()%2000;
    int key[10] ={9, 53, 368, 1064, 1753, 1, 271, 799, 1968, 1997}; 
    cout<<"count1:";
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<500;j++)
        {
            count++;
            if(a[j]==key[i])
            {
                break;
            }
        }
        cout<<count<<" ";
        av1+=count;
    }
    av1/=10;
    cout<<endl<<"average1="<<av1<<endl;
    for(int i=1;i<500;i++)
    {
        int key=a[i];
        int j;
        for(j=i-1;j>=0&&key<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    cout<<"count2:";
    for(int i=0;i<10;i++)
    {
        int l=0,r=499,m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(key[i]==a[m])
            {
                count++;
                break;
            }
            else if(key[i]>a[m])
            {
                count+=2;
                l=m+1;
            }
            else
            {
                count+=2;
                r=m-1;
            }
        }
        cout<<count<<" ";
        av2+=count;
    }
    av2/=10;
    cout<<endl<<"average2="<<av2<<endl;
    return 0;
}