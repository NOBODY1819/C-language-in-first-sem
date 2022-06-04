#include<stdio.h>
int fct();

int main()
{int f;

f = fct();
 printf("Factorial is : %d",f);
}

               //function with return but no argument.

int fct()
{  printf(" In function \n");

    int a,i,x=1;
    
    printf("Enter a number :");
     scanf("%d",&a);
    
     for ( i = 1; i <= a; i++)
    {
        x=x*i;    
    }
      printf("End of function\n");
      return x;
}
