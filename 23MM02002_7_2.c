#include<stdio.h>
#include<string.h>

void result(char w[])
{
    int len= strlen(w);
    char t[len];
    
    int i,c=0;

    for(i=0;i<len;i++)
    {
        if(w[i]>='A'&&w[i]<='Z'||w[i]>='a'&&w[i]<='z'||w[i]==' ')
        {
            
            t[c]=w[i];
            c++;

        }
        
    }
    printf("Output: %s",t);

}

void main()
{
    char st[50];

    printf("Input a string:\n");
    gets(st);

    result(st);
}