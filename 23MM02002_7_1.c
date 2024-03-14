#include<stdio.h>
#include<string.h>

int freq(char w[],char c)
{

    int len,f=0;

    len= strlen(w);

    if(c>='A'&&c<='Z')
    strupr(w);

    else if(c>='a'&&c<='z')
    strlwr(w);

    for(int i=0;i<len;i++)
    {

        if(w[i]==c)
        f++;
        
    }
    return f;
}

void main()
{
    char st[50];
    char ch;
    
    printf("Input a string:\n");
    gets(st);

    printf("Input the character whose frequency has to be noted:\n");
    scanf(" %c",&ch);

    printf("The frequency of %c is: %d",ch,freq(st,ch));

}