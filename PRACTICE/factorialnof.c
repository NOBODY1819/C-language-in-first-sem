#include<stdio.h>
int main()
{  
    int a[]={10,20,15,30,40};
     int *p=&a[0];
     printf("%u\n",p);
     p=p+1;
     printf("%u\n",p);
     int (*ptr)[5]=a;
     ptr=ptr+1;
     printf("%u",ptr);


    //  int a,i,f=1;
    //  printf("Enter a number :");
    //  scanf("%d",&a);
    //                               //Factorial without function.
    //  for ( i = 1; i <= a; i++)
    //  {
    //      f=f*i;    
    //  }

    //  printf("Factorial of %d is : %d",a,f);
    return 0;
}