#include<stdio.h>
#include<string.h>

int main()
{
    char word[10];
    int i,len=0;

    printf("Enter a word:\n");
    gets(word);

    while(word[len]!='\0')
    {
        len++;
    }

    printf("The length of the word: %d\n",len);


    for(i=0;i<=len/2;i++)
    {
        if(word[i]!=word[len-i-1])
        {

            printf("The word is not palindrome\n");
            return 0;

        }
    }
    
    
    printf("The word is Palindrome\n");
    return 0;

}