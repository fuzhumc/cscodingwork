#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum;
    for(int i=1;i<=1000;i++)
    {
        sum=0;
        for(int j=1;j<i;j++) if(i%j==0) sum+=j;
        if(sum==i)
        {
            cout<<"完数"<<i<<"的因子为：";
            for(int j=1;j<i;j++) if(i%j==0) cout<<i<<" ";
            cout<<endl;
        }
    }

    return 0;
}