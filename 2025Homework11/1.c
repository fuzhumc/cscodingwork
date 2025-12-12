#include<stdio.h>
#include<ctype.h>

void encrypt(char *filename,int n)
{
    int s[1000];
    int i=0;
    freopen(filename,"r",stdin);
    while((s[i]=getchar())!=EOF)
    {
        if(islower(s[i])) s[i]=(s[i]-'a'+n)%26+'a';
        else if(isupper(s[i])) s[i]=(s[i]-'A'+n)%26+'A';
        i++;
    }
    freopen(filename,"w",stdout);
    for(i=0;s[i]!=EOF;i++) putchar(s[i]);  
}

void decrypt(char *filename,int n)
{
    int s[1000];
    int i=0;
    freopen(filename,"r",stdin);
    while((s[i]=getchar())!=EOF)
    {
        if(islower(s[i])) s[i]=(s[i]-'a'-n+26)%26+'a';
        else if(isupper(s[i])) s[i]=(s[i]-'A'-n+26)%26+'A';
        i++;
    }
    freopen(filename,"w",stdout);
    for(i=0;s[i]!=EOF;i++) putchar(s[i]);  
}

int main()
{
    char c;
    char s[20];
    int n;
    printf("Choose: A.Encrypt B.Decrypt\n");
    scanf("%c",&c);
    printf("Enter file name:\n");
    scanf("%s",s);
    printf("Enter number:");
    scanf("%d",&n);
    if(c=='A') encrypt(s,n);
    else decrypt(s,n);
    
    return 0;
}