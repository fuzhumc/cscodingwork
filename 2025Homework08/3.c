#include<stdio.h>
#include<string.h>

int wordcounter(char str[])
{
    int count=0,count1=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(('a'<=str[i]&&str[i]<='z')||('A'<=str[i]&&str[i]<='Z')||str[i]=='-') count1++;
        else if(count1!=0)
        {
            count++;
            count1=0;
        }
    }
    return count;
}

int main()
{
    char s[100];
    fgets(s,100,stdin);
    printf("%d\n",wordcounter(s));

    return 0;
}