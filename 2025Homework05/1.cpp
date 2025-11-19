#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(int i=j=1;i<=n*(n+1)/2;i++)
    {
        cout<<i<<' ';
        if(i==j*(j+1)/2)
        {
            cout<<endl;
            j++;
        }
    }

    return 0;
}