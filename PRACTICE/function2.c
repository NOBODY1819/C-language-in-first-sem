#include<stdio.h>
int evenodd(int x);
int main()
{
     int a;
    printf("programe for even/odd\n");
    printf("Enter the number :");
    scanf("%d",&a);
     evenodd(a);
}

int evenodd(int x)
{

    if (x%2==0)
    {
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    
    
}