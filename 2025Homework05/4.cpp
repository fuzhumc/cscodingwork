#include <bits/stdc++.h>

using namespace std;

int gcd(int m,int n)
{
    if(m==0) return n;
    else if(n==0) return m;
    else return gcd(n,m%n);
}

int main()
{
    int m,n,d;
    scanf("%d/%d",&m,&n);
    d=gcd(m,n);
    cout<<m/d<<"/"<<n/d<<endl;
    return 0;
}