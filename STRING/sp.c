#include<stdio.h>
#include<string.h>
int main()
{
 char s[]="hello world";
 char c='o';
 char* p;
 int i,j;
 p=strrchr(s,c);  //Finding last occrance of a character
 printf("%s\n",p);

 for ( i = 0; i < strlen(s); i++)
 {                                    //Removing spaces from a string
     if (s[i]==32)
     {
         for ( j = i; j < strlen(s)-1; j++)
         {
             s[j]=s[j+1];
         }
        
     }
     
 }
 
 printf("Spaces are removed :%s ",s);

return 0;
}