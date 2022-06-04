#include<stdio.h>
#include<math.h>
int main()

{
  int n,o,q,sum,s=1,r,a;
   
   printf("Enter the number :");
    scanf("%d",&n);
   
   o=0;
   sum=0;
   a=n;
   q=n;
  while (q!=0)
  {
     q=q/10;
      o++;
  }
     
     printf(" order of number is :%d\n",o);

  while (s<=o)
  {
    r=n%10;
     n=n/10;

    sum=sum+pow(r,o);
     s++;
  }
    
    printf("sum is %d\n",sum);

  if (sum ==a)
 { 
    printf("Number %d is armstrong's number\n",a);
  } 
  else
    printf("Number %d is not armstrong's number\n",a);
   
  return 0;
}