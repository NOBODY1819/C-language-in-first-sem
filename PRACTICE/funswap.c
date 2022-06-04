#include<stdio.h>
void swap();

int main()
{
    printf("In main\n");
    swap();
      printf("Main end\n");
    return 0;
}
                //Swaping without argument
void swap()
{
    int a,b,t;
    printf("In swap\n");
    printf("Enter two numbers a & b : ");
   scanf("%d %d",&a,&b);
   printf("Before swap a=%d & b=%d\n",a,b);
   t=a;
   a=b;
   b=t;
   printf("After swap a=%d & b=%d\n",a,b);
   printf("Swap end\n");
}

