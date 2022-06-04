#include<stdio.h>
int evenodd();
int main()
{
    printf("Programe for even/odd\n");
    evenodd();
}

int evenodd()
{
      int x;
    printf("ENter the number :");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    
    
}