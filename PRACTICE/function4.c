#include<stdio.h>
int fct(int x);

int main()
{
  int a,f;
printf("Enter a number :");
    scanf("%d",&a);

f=fct(a);
printf("Factorial of %d is : %d",a,f);

}
                      //function with return and argument.
int fct(int x)
{  
    printf(" In function \n");
    int y=1,i;
    for ( i = 1; i <= x; i++)
    {
        y=y*i;    
    }
    printf("End of function \n");

    return y;

}