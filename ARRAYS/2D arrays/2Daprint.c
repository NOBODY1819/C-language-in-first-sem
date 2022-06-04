#include<stdio.h>
int main()
{
    int a[4][3],i,j,sum=0;

    printf("Enter the element's :");

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }                                    // 2D Array declariation,input,output and sum of all elements.
    
    printf(" The 2D array formed\n");

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");    
    }

    for ( i = 0; i < 4; i++)
    {
        for ( j= 0; j < 3; j++)
        {
            sum=sum+a[i][j];
        }
        
    }
    printf("\nSum of all element's in array is : %d",sum);
    
    return 0;
}