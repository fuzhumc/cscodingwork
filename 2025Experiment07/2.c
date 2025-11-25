#include<stdio.h>
#include<string.h>

void f(char *s,int n)
{
    int l=strlen(s);
    if(l>0&&s[l-1]=='\n')
    {
        s[l-1]='\0';
        l--;
    } 
    n%=l;
    char t[l+1];
    strncpy(t,s,l);
    t[l]='\0';
    for(int i=0;i<l;i++)
    {
        s[i]=t[(i-n+l)%l];
    }
}
int main()
{
    int n;
    char str[50];
    fgets(str,50,stdin);
    scanf("%d",&n);
    f(str,n);
    printf("%s\n",str);
    return 0;
}