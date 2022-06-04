#include<stdio.h>
int pattern();

int main()
{
    printf("\n\tPatter function");
    pattern();
    return 0;
}
int pattern()
{
    int i,j,r;
    printf("\nEnter the number of rows :");
     scanf("%d",&r);

for ( i = 0; i <=r; i++)         
  {

    for ( j = 0; j <i; j++)
    {
        printf("*\t");
    }
  
    printf("\n");
  }

}