#include<stdio.h>
void swap(int *x,int *y);
int main()
{   int a=5,b=6;
    printf("In calling function, before function a=%d & b=%d\n",a,b);
     swap(&a,&b);
     printf("in calling function after function a=%d & b=%d\n",a,b);
}                                 
void swap(int *x,int *y)       //swap by call of reference
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("In called function a=%d & b=%d\n",*x,*y);
}