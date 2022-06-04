#include<stdio.h>
int main()
{
int i,j,r,c;

printf("Enter the number of rows :");
scanf("%d",&r);

for ( i = 1; i <=r; i++)         //FULL STAR
{
    for ( c = 1; c <=r-i; c++)
    {
        printf(" ");
    }

    for ( j = 1; j <=2*i-1; j++)
    {
        printf("*");
    }
    
    
    printf("\n");
}

for ( i = r-1; i>0; i--)
{ 
         
    for (c =r-i ; c>0; c--)
   {     
     printf(" ");
           
    }
      for ( j = 1; j<=2*i-1 ; j++)
      {
       
       printf("*");
      }
 

 printf("\n");
}
    return 0;
}