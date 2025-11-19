#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=n*(n+1)/2,j=n;j>=1;j--)
    {
        for(int k=j-1;k>=0;k--)
        {
            cout<<i-k<<" ";
        }
        i-=j;
        cout<<endl;
    }
    return 0;
}