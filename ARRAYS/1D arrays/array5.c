#include<stdio.h>
int main()

{
    int a[5],i,j,k,t;

    printf("Enter the elements :");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }                                    //Bubble sorting of Array
       printf("Array you entered\n");
    for ( i= 0; i < 5; i++)
    {
    printf("a[%d]=%d  ",i,a[i]);
    }
    
    for ( j = 0; j < 5-1; j++)
    {
        for ( k = 0; k < 5-1; k++)
        {
          if (a[k]>a[k+1])
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    printf("\nArray in increasing order\n");
    for ( i = 0; i < 5; i++)
    {
    printf("a[%d]=%d  ",i,a[i]);
    }
    
    return 0;
}