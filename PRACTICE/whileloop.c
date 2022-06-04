#include<stdio.h>

int main()
{
    int a,sum,n;
    a=0;
   
     sum=0;
   printf("Enter the number :");
   scanf("%d",&n);

     while (a<=n)
    {
 
      sum = sum + a;
     
         a++;
         
     }
    
     printf("Sum of first %d numbers = %d",n,sum);

   
     /*while (a<11)
    {
        printf("%d * %d =%d \n",n,a,a*n);
        a++;
    }*/
    
    return 0;
}