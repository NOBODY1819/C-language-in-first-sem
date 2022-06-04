#include<stdio.h>
int sum( float x,float y);
int div(int x,int y);
int mult(float x,float y);
int sub(float x,float y);
int rem(int x,int y);

int main()
{ 
  float a,b;
   printf("Enter two number's :");
     scanf("%f %f",&a,&b);
    char o;
    printf("Enter the operator : ");
    scanf("%s",&o);
   
switch (o)
{
case '+':  sum(a,b);
    break;

case '-':  sub(a,b);
    break;

case '*':  
    mult(a,b);
    break;

 case '/':
    div(a,b);
    break;
 case'%':
    rem(a,b);
    break;

    default: printf("End");
} 
return 0;
}

int sum(float x,float y)
{
 float result;
   result=x+y;
  printf("Result is :%.3f",result);
}

int sub(float x,float y)
{ 
  float result;
  result=x-y;
   printf("Result is :%.3f",result);
 }

int mult(float x,float y)
{
  float result;
   result=x*y;
   printf("Result is :%.2f",result);    
}

int div(int x,int y)
{
   int result;
    
  result=x/y;

   printf("Result is :%d",result);    
}
int rem(int x,int y)
{
   int result;
    
  result=   x % y;

   printf("Result is :%d",result);    
}
