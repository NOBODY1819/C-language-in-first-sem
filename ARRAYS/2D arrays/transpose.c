#include<stdio.h>
int main()
{
    int a[4][3],b[3][4],i,j;
     printf("Enter the element's :");
     for ( i = 0; i < 4; i++)
     {
         for ( j = 0; j < 3; j++)
         {
          scanf("%d",&a[i][j]);   
         }
      }

     printf("Array formed\n");
      for ( i = 0; i < 4; i++)
     {
         for ( j = 0; j < 3; j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
       
       printf("Transpose of Array\n");
         for ( i = 0; i < 4; i++)
     {
         for ( j = 0; j < 3; j++)
         {
           b[j][i]=a[i][j];  
         }
      }
        for ( i = 0; i < 3; i++)
     {
         for ( j = 0; j < 4; j++)
         {
          printf("%d\t",b[i][j]);   
         }
         printf("\n");
     }
        return 0;
}