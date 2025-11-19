#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    string ab,ba;
    cin>>a>>b;
    ab=to_string(a)+to_string(b);
    ba=to_string(b)+to_string(a);
    if(ab>ba)
    {
        cout<<ab<<endl;
    }
    else
    {
        cout<<ba<<endl;
    }
    return 0;
}