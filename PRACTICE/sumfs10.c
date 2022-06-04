#include<stdio.h>
int sum(int x);

int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("sum of first %d numbers is : %d",a,sum(a));
    
}
int sum(int x)
{
    int i=0,y=0;
    while (i<=x)
    {
        y=y+i;
        i++;
    }
    printf("Sum end\n");
return y;
}