#include<stdio.h>
int main()

{

int a,b,d;

printf("enter the number :");
scanf("%d",&a);
b=a-1; 
d=0;

while (b>1)
{
    if (a%b==0)
    {
        d++;
    }
    b--;
}
if (d==0)
{
    printf(" number is prime");
}
else
{
    printf("number is not prime");
}


    return 0;
}