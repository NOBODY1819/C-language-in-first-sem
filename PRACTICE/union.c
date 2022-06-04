#include<stdio.h>
 union book
 {
     char title[15];
     char author[10];
     int page;
     int year;
     float price;

 }book[2];
 
int main()
{
   printf("\t**Enter student details**\t\n");

   for (int i = 0; i < 1; i++)
   {
       printf("Book %d\n",i+1);
       printf("Enter book title :");
       scanf("%s",&book[i].title);
       printf("Enter Author's name :");
       scanf("%s",&book[i].author);
       printf("Enter publication year :");
       scanf("%d",&book[i].year);
       printf("Enter no. of page's :");
       scanf("%d",&book[i].page);
       printf("Enter price in Rs:");
       scanf("%f",&book[i].price);

   }  
   printf("\t**Books details**\t\n");
        printf("Book no.\tBook title\tAuthor's name\tYear of publication\tPage's \tPrice (in Rs)\t\n");
    for ( int i = 0; i < 2; i++)
    {
        printf("%d\t%s\t%s\t%d\t%d\t%.2f\t\n",i+1,book[i].title,book[i].author,book[i].year,book[i].page,book[i].price);
        
    }
      printf("Size of union :%d",sizeof(book));
}