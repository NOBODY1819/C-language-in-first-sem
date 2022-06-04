#include<stdio.h>
int main()
{
   int n,r;
   printf("\nEnter a number :");
   scanf("%d",&n);

   r=n%2;
   switch (r)
   {
   case 0:
       printf("\n%d is even ",n);
       break;
   
   default: printf("\n %d is odd",n);
       break;
   } 
    return 0;
}