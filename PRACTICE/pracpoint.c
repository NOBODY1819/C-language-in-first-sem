#include<stdio.h>
int main()
{
    int i,*p=&i,**q=&p,***r=&q;
    printf("Enter the value of i:");
    scanf("%d",&i);

    printf("Value of varriable i : %d\n",i);
     printf("Address of varriable i : %x\n",&i);
    
    printf("Address at pointer : %x\n",p);
     printf("Value of *pointer :%d\n",*p);
    
    printf("Address of *pointer : %x\n",&p);
     printf("value of *(&i) :%x\n",*(&i));

      printf("Value of **pointer :%d\n",**q);
    printf("Address of **pointer : %x\n",&q);

      printf("Value of ***pointer :%d\n",***r);
    printf("Address of ***pointer : %x\n",&r);

    return 0;

}