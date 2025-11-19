#include<stdio.h>

void get_string(char s[])
{
    fgets(s,100,stdin);
}

void replace_char(char s[],char c1,char c2)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==c1) s[i]=c2;
        i++;
    }
}

int main()
{
    char str[100],c1,c2;
    get_string(str);
    scanf("%c %c",&c1,&c2);
    replace_char(str,c1,c2);
    printf("%s\n",str);
    return 0;
}