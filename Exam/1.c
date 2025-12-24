#include<stdio.h>
#include<string.h>

int isnum(char c){
    return '0' <= c && c <= '9';
}

int isalpbet(char c){
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

int main() {
    char s[101];
    fgets(s, 101, stdin);
    if(isnum(s[0])){
        printf("0\n");
        return 0;
    }

    for(int i=0;i<strlen(s)-1;i++) {
        if(!isnum(s[i])&&!isalpbet(s[i])&&s[i]!='_')
        {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");

    return 0;
}