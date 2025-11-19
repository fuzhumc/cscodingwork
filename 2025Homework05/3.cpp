#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0) return 0;
        i++;
    }
    return 1;
}

int main()
{
    int n;
    int s=0;
    int count=0;
    cin>>n;
    if(n<29) cout<<"failed"<<endl;
    else for(int i=n;count<10;i--)
    {
        if(isPrime(i))
        {
            s+=i;
            if(count==9) cout<<i<<"="<<s<<endl;
            else cout<<i<<"+";
            count++;
        }
    }
    return 0;
}