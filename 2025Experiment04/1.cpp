#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[21],k,i;
    srand(time(0));
    cin>>k;
    for(i=0;i<20;i++) {a[i]=rand()%101;cout<<a[i]<<" ";}
    cout<<endl;
    a[20]=k;
    for(i=0;a[i]!=k;i++);
    if(i!=20) cout<<i<<endl;
    else cout<<"not found"<<endl;
    return 0;
}