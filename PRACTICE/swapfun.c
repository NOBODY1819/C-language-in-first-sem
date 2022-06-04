#include<stdio.h>
int swap( int x ,int y);

int main()
{int a,b;
    printf("In main\n");
    
    printf("Enter two numbers a & b : ");
      scanf("%d %d",&a,&b);
   printf("Before swap a=%d & b=%d\n",a,b);
    
    swap(a,b);

      printf("Main end\n");
    return 0;
}
                         //Swaping with argument
 int swap( int x ,int y)
{
    int t;
    printf("In swap\n");
   t=x;
   x=y;
   y=t;
   printf("After swap a=%d & b=%d\n",x,y);
   printf("Swap end\n");
}

