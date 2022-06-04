#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char c;
    int i,a=0;

    printf("Enter any string :");
    gets(s);
    printf("Enter character to search :");
    scanf("%c",&c);             
    if (strchr(s,c)!=0)   //Finding frequency of character
    {
        printf("Character %c is found in %s\n",c,s);
        for ( i = 0; s[i]!='\0'; i++)
        {
            if (s[i]==c)
            {
                a++;
            }
            
        }
        printf("Frequency of character is : %d",a);
    }
    else
    {
        printf("Charater is not found");
    }
    return 0;
}