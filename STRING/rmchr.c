#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,j;
     printf("Enter any string :");
     gets(s);
     
 for ( i = 0; i < strlen(s); i++)
 {                                    //Removing characters from a string
     if (s[i]<65)
     {
         for ( j = i; j < strlen(s); j++)
         {
             s[j]=s[j+1];
         }
       i--; 
     }
   
 }
 
 printf("characters are removed :%s ",s);
}