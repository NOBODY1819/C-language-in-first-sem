#include<stdio.h>
#include<string.h>
int main()
{
  char str[20]="hello world";
 char c1='r';
 char c2='z';  
 
 
 if ( strchr(str,c1)!=NULL)
 {
   printf("Character %c is found",c1);
 }
 else
 {
   printf("\nCharacter %c is not found",c1);
 }

 if (strchr(str,c2)!=0)
 {
   printf("\nCharacter %c is found",c2);
 }
 else
 {
   printf("\nCharacter %c is not found",c2);
 }


return 0;
}