#include<stdio.h>

int recta(int l, int b)
{
  int a;
  a=l*b;
  return a;

}
int rectp(int l, int b)
{
  int p;
  p=2*(l+b);
  return p;
}

int cira(int r)
{
  int a;
  a= 3.14*r*r;
  return a;
}
int circ(int r)
{
  int c;
  c=2*3.14*r;
  return c;
}

int main()
{
    int l,b,r;
    printf("Enter the length of rectangle :");
    scanf("%d",&l);                               //Area and perameter of rectangle
     printf("Enter the breadth of rectangle :");
    scanf("%d",&b);
    printf("Area of rectangle is : %d\n",recta(l,b));
    printf("Perameter of rectangle is : %d\n",rectp(l,b));
     
     printf("Enter the radius of circle :");      //Area and circumfrence of circle
     scanf("%d",&r);

      printf("Area of circle is : %d\n",cira(r));
    printf("Circumfrence of circle is : %d\n",circ(r));
    return 0;
}