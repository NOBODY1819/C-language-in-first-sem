#include<stdio.h>
void fct();

int main()
{ printf("In main\n");
fct();
}
               //function with no return and no argument
void fct()
{  printf(" In function \n");

    int a,i,f=1;
    printf("Enter a number :");
    scanf("%d",&a);

    for ( i = 1; i <= a; i++)
    {
        f=f*i;    
    }

    printf("Factorial of %d is : %d\n",a,f);
    printf("End of function\n");
}