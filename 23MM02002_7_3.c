#include<stdio.h>
#include<string.h>

void revstr(char str[],int start , int end)
{
    
    if (start>=end)
    {
        return;
    }
    
    char temp;
    temp = str[start];
    str[start]=str[end];
    str[end]=temp;

    revstr(str,start+1,end-1);
}
int main()
{

    char str[50];
    printf("Enter Word: ");
    gets(str);

    int length;
    length=strlen(str);

    revstr(str,0,length-1);

    printf("Its reverse is: %s",str);

    return 0;
}