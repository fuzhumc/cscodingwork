#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[51];
    int n,l;
    scanf("%s",s);
    l=strlen(s);
    cin>>n;
    for(int i=-n;i<l-n;i++) cout<<s[(i%l<0)?i%l+l:i%l];
    return 0;
}