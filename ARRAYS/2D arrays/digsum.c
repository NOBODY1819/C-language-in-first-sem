#include<stdio.h>
int main()
{int a[4][4];
int i,j ,sum=0;
    printf("Enter the element's :");
     for ( i = 0; i < 4; i++)
     {
         for ( j = 0; j < 4; j++)
         {
          scanf("%d",&a[i][j]);   
         }
      }

     printf("2D Array/Matrix formed\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Right diagonal of 2D Array/Matrix\n");
      for ( i = 0; i < 4; i++)
      {
          for ( j = 0; j < 4; j++)
          {
              
              if (i==j)
              {
                  printf("a[%d][%d] : %d",i,j,a[i][j]);
                  sum=sum+a[i][j];
              }
              
          }
          printf("\n");
      }
      
     printf("Sum of right digonal is : %d",sum);
return 0;
}