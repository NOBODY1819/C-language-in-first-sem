#include<stdio.h>
int main()
{
    int x;
    printf("Enter a value b/w 1-7 :");
    scanf("%d",&x);
    
    if (x==1)
    {
    printf("Today is Monday");
    }
    
     if (x==2)
    {
    printf("Today is Tuesday");
    }
    
    if (x==3)
    {
    printf("Today is Wednesday");
    }
    
    if (x==4)
    {
    printf("Today is Thursday");
    }
    
    if (x==5)
    {
    printf("Today is Friday");
    }
    
    if (x==6)
    {
    printf("Today is Saturday");
    }
    
    if (x==7)
    {
    printf("Today is Sunday");
    }
    
    
    /*switch (x)
    {
    case 1 :
        printf("Today is Monday");
        break;

    case 2 :
        printf("Today is Tuesday ");
        break;

     case 3 :
        printf("Today is Wednesday");
        break;

     case 4 :
        printf("Today is Thursday");
        break;

     case 5 :
        printf("Today is Friday");
        break;

     case 6 :
        printf("Today is Saturday");
        break;

     case 7 :
        printf("Today is Sunday");
        break;


    default:
    printf("Invalid input");
        break;
    }*/
    
    return 0;
}