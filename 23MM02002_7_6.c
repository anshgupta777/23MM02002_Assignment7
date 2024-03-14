#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string\n");
    scanf("%s",&s);
    int l=strlen(s);
    char sub[100];
    printf("Enter substring to be checked\n");
    scanf("%s",&sub);
    int l1=strlen(sub);
    for(int i=0;i<=l-l1;i++)
    {
        int successiveMatchCounter=0;
        int k=0;
        while(k<=l1)
        {
            if(s[i+k]==sub[k])
            {
                successiveMatchCounter++;
            }
            else
            {
                break;
            }
            k++;
        }
        if(successiveMatchCounter==l1)
        {
            printf("Substring can be found in the string");
            return 0;
        }
    }
    printf("Substring can not be found in the string");
    return 0;
}