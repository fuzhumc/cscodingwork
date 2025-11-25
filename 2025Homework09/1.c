#include<stdio.h>
#include<string.h>

int valid_brackets(char *str)
{
    int s=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(*(str+i)=='(')
        {
            s++;
        }
        else if(*(str+i)==')')
        {
            s--;
            if(s<0) return 0;
        }
    }
    return s==0?1:0;
}

int main()
{
    char s[100];
    fgets(s,100,stdin);
    printf(valid_brackets(s)?"true":"false");
    return 0;
}