#include<stdio.h>
#include<string.h>
int main()
{
 char string1[20],string2[20];
 int res;
 
 printf("Enter frist string:");          
 gets(string1);
                                      //Comparing two strings
 printf("Enter second string:");
 gets(string2);

 res = strcmp(string1,string2);
 if (res==0)
 {
     printf("\nBoth strings are equal");
 }
 else
 {printf("Strings are not equal\n");
 printf("value is %d",res);
 }
 printf("\nFirst string: %s\n",string1);
 printf("Sceond string: %s",string2);

    return 0;
}