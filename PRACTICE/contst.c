#include<stdio.h>
int main()
{
int i,j;

for ( i = 1; i < 4; i++)
{
    for ( j = 0; j < 4; j++)
    {
        printf(" i = %d",i);
        
        if (j==2)
        {printf("\n");
        continue;}
        
        
        printf(" j = %d\n",j);

    }
    printf("\n");
}



    return 0;
}