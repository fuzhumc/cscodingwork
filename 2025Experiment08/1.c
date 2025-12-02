#include<stdio.h>
#include<string.h>

void move(char *s,int l,int n)
{
    if(l<=0) return;
    n%=l;
    char t[l+1];
    strncpy(t,s,l);
    t[l]='\0';
    for(int i=0;i<l;i++)
    {
        s[i]=t[(i-n+l)%l];
    }
}
void f(char *s,int n)
{
    
    if(n<=0) return;
    s[n-1]=' ';
    int i=0;
    while(i<n&&s[i]!=' ') i++;
    if(i>=n) return;
    move(s,n,n-i-1);
    f(s,n-i-1);
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int n=strlen(str);
    f(str,n);
    printf("%s\n",str);
    return 0;
}