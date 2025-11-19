#include <stdio.h>

int main()
{
    char s[101];
    fgets(s,101,stdin);
    int c=0;
    int i;
    for(i=0;s[i]!='\n';i++)
    {
        if(s[i]=='0') c++;
        else
        {
            if(c==0) printf("a");
            else if(c==1) printf("b");
            else printf("c");
            c=0;
        }
    }
    printf("\n");

    return 0;
}