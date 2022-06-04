#include<stdio.h>
int main()

{
int a,b,c;
  printf("Enter the first number :");
   scanf("%d",&a);
  printf("Enter the seconf number :");
    scanf("%d",&b);

c=(a>b)?a:b;

while (1)
{
    if (c%a==0&&c%b==0)
    
    {printf("The LCM of %d and %d is = %d",a,b,c);
        break;
    }
    c++;
}

    return 0;
}