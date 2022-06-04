#include<stdio.h>
int main()
{
    int a[]={1,3,6,9,-4};
    int i,*p;

    printf("Adding in Pointers\n");  
    for ( i = 0; i < 5; i++)
    {
        p=&a[i];
        printf("Value at a[%d] : %d\n",i,*p);
        printf("Address of a[%d] : %x\n",i,p);
        p=p+i;
    }

    printf("\nSubtraction in Pointers\n");
    for ( i = 4; i >=0; i--)
    {
        p=&a[i];
        printf("Value at a[%d] : %d\n",i,*p);
        printf("Address of a[%d] : %x\n",i,p);
        p=p-i;
    }
    
    return 0;
}