#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="Welcome to INDIA";
    char s1[10]=" to JAMMU";
    char s2[10];
    char* p;
    printf("Enter a string :");
    scanf("%2s",s2);
    p = strstr(str,s2);
    if (p)
    {
        printf("string \"%s\" is found in \"%s\"\n",s2,str);
        strcpy(p,s1);
          printf("\n%s",p);
        
    }
    else
    {
        printf("string not found");
    }
     
    return 0;
}