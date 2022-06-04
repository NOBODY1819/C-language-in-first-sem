#include<stdio.h>
int main()
{
    int a[5],i,j,t;

    printf("Enter the elements :");      //slection sorting
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
  for ( i = 0; i < 5; i++)
  {
     for ( j = i+1; j < 5; j++)
     {
          if (a[i]>a[j])
       {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
    
      }
   }
  for ( i = 0; i < 5; i++)
  {
      printf("a[%d]=%d  ",i,a[i]);
  }
    return 0;
}