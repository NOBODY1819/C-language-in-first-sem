#include<stdio.h>
int main()

{
int no,rev,a1,b1,c1,a,b,c;

printf("Enter the number :");
scanf("%d",&no);

/* a=no/10;
a1=no%10;
b=a/10;
b1=a%10;
c=b/10;
c1=b%10;

rev=a1*100+b1*10+c1*1;
printf(" reverse of number is =%d",rev);*/

rev=0;
b=0;

while (no!=0)
{
   
    
    b=no%10;
      rev=rev*10+b;
       no=no/10;
}

printf("reverse of no. is = %d",rev);

    return 0;
}