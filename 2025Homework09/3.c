#include<stdio.h>
#include<string.h>

int main()
{
    char countries[10][40];
    char *index_by_length[10];
    char *index_by_alphabet[10];
    char *temp;
    for(int i=0;i<10;i++) 
    {
        fgets(countries[i],40,stdin);
        index_by_length[i]=countries[i];
        index_by_alphabet[i]=countries[i];
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strlen(index_by_length[i])>strlen(index_by_length[j]))
            {
                temp=index_by_length[i];
                index_by_length[i]=index_by_length[j];
                index_by_length[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(index_by_alphabet[i],index_by_alphabet[j])>0)
            {
                temp=index_by_alphabet[i];
                index_by_alphabet[i]=index_by_alphabet[j];
                index_by_alphabet[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<10;i++) printf("%s",index_by_length[i]);
    printf("\n");
    for(int i=0;i<10;i++) printf("%s",index_by_alphabet[i]);
    return 0;
}