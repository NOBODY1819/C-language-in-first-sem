#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
   char  w;
  
printf("Enter the frst number :");
 scanf("%d",&a); 
  
 printf("Enter the operator :");
 scanf("%s",&w);
 getchar();

printf("Enter the second number :");
 scanf("%d",&b);

switch (w)
{
case '+':  printf("The result is =%d",a+b);
    break;

case '-':  printf("The result is =%d",a-b);
    break;

case '*':  printf("The result is =%d",a*b);
    break;

case '%':  printf("The result is =%d",a%b);
    break;

 case '/': printf("The result is : %d",a/b);
}
    return 0;
}