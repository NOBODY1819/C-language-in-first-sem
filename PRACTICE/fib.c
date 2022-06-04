#include<stdio.h>
int main()

{
 int a,b=0,c=0,d=1,e;

 printf(" Enter the number's you want :");
 scanf("%d",&a);
printf(" first no. is 0 and second is 1\n");

 while (b<a)
 {
    e=c+d;
    printf("%d\n",e);
    c=d;
     d=e;
    b++;
    
 }
 
    return 0;
}