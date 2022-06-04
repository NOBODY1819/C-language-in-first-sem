#include<stdio.h>
int main()
{
    int a[10],i,c,x,b=0,g=0,s;

    for ( i = 0; i < 10; i++)
    {
        printf("Enter the  element  \n:");
        scanf("%d",&a[i]);
    }
    printf(" what you want: \n 1) Order of elements in array. \n 2) ELements in reverse order.\n 3) Element to search. \n 4) Sum of all element's.\n");
    printf(" 5) Greatest of all \n 6) Smallest of all\n Enter its no. :");
scanf("%d",&c);

switch (c)
{
case 1:
  
  printf(" 1) Total number of elements in array is 10\n");
        
        
    for ( i = 0; i < 7; i++)
    {
        printf("Element at  index %d is %d\n",i,a[i]);
    
    }   
       break;

 case 2:     
         printf(" 2) ELements in reverse order\n");

    for ( i = 10; i>=0; i--)
    {
       printf("Element at  index %d is %d\n",i,a[i]); 
    }
    break;

 case 3:  
         printf("3) Element to search is :\n");
    scanf("%d",&x);
      
      for ( i = 0; i < 10; i++)
      {
         if (x==a[i])
        {
         printf("Element at index %d is %d\n",i,a[i]);
         b=1;
         break;
        }
        
      }
      if (b==0)
      {
        printf(" Element is not found\n");
      }
      break;

case 4:
        for ( i = 0; i < 10; i++)
      {
        s=s+a[i];
      }
      printf("4) Sum of all element's is : %d",s);
      
    break;

case 5:
      for ( i = 0; i < 10; i++)
    {
       if (g<a[i])
       {
         g=a[i];
       }
        printf("5)  Greatest of all element's' is : %d",g);
    }
    break;

case 6:    s=a[0];
       for ( i = 0; i < 10; i++)
    {
       if (s>a[i])
       {
         s=a[i];
       }
    }
        printf("6)  Smallest of all element's' is : %d",s);
    break;
}
    return 0;
}
    
    