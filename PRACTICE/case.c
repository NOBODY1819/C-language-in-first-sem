#include<stdio.h>
#include<string.h>

int bill()
{
    unsigned int price,o;
    float gst,t;
    char item[20];

    printf("Name of item :");
    gets(item);
    printf("Price of item :");
    scanf("%d",&price);
    printf("Quantity of item :");
    scanf("%d",&o);
   
   gst=o*price*0.18;
   t=price+gst;
   printf("\n\t\t****WELCOME TO CCD*****");
    printf("\nName of item : %s",item);
      printf("\nPrice of item :%d",price);
        printf("\nQuantity of item :%d",o);
        printf("\nGST on items :%.2f ",gst);
        printf("\nTotal price to be paid : %.2f",t);
        printf("\n\n\t\t****HAVE A NICE DAY****");
        printf("\n\n\t\t****VISIT AGAIN*****");

   return 0;
}