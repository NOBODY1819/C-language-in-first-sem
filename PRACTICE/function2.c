#include<stdio.h>
void fct(int x);

int main()
{
    int a;
printf("Enter a number :");
    scanf("%d",&a);

fct(a);
}
               //function with no return but argument.
void fct(int x)
{  printf(" In function \n");

    int i,f=1;
    
    for ( i = 1; i <= x; i++)
    {
        f=f*i;    
    }

    printf("Factorial of %d is : %d\n",x,f);
    printf("End of function\n");

}