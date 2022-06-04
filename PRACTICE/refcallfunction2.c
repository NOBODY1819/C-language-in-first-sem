#include<stdio.h>
float area(float *x,float *y,float *z);
float perimeter(float *x,float*y);
int main()
{   float r,a,p;
    printf("Enter radius of circle :");
    scanf("%f",&r);
     area(&r,&a,&p);
    //  perimeter(&r,&p);
     printf("Area of circle with radius %.2f is =%.2f\n",r,a);
     printf("Perimeter of circle with radius %.2f is =%.2f",r,p);

}                                 
float area(float *x,float *y,float *z)       //Area and perimeter of circle by call of reference
{
    
    *y=3.14*(*x) *(*x);
     *z=2*3.14*(*x);
 
 }
// float perimeter(float *x,float *y)
// {
// }