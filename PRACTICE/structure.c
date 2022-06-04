#include<stdio.h>

struct student
{
    char name[10];
    int rollno;
    float engmarks;
    float hinmarks;
    float matmarks;

};

int main()

{  int i,n,x,b=0;
   printf("Enter number's of students :");
   scanf("%d",&n);
   struct student stu[n];
   
    for (i=0;i<n;i++)
    {
      printf("Enter student %d's Name :",i+1);
      scanf("%s",&stu[i].name);
      printf("Enter student %d's Roll no :",i+1);
      scanf("%d",&stu[i].rollno);
      printf("Enter student %d's marks in English :",i+1);
      scanf("%f",&stu[i].engmarks);
      printf("Enter student %d's marks in Hindi :",i+1);
      scanf("%f",&stu[i].hinmarks);
      printf("Enter student %d's marks in Math :",i+1);
      scanf("%f",&stu[i].matmarks);
    }

     printf(" Enter Roll no. search  :");
    scanf("%d",&x);
      
      for ( i = 0; i < n; i++)
      {
         if (x==stu[i].rollno)
        {
             printf("Student %d's Name :%s\n",i+1,stu[i].name);
      printf("Student %d's Roll no. :%d\n",i+1,stu[i].rollno);
      printf("Student %d's marks in English :%.2f\n",i+1,stu[i].engmarks);
      printf("Student %d's marks in Hindi :%.2f\n",i+1,stu[i].hinmarks);
       printf("Student %d's marks in Math :%.2f\n",i+1,stu[i].matmarks);
         b++;
         break;
        }
        
      }
      if (b==0)
      {
        printf(" Roll no. is not found\n");
      }

   /*for ( i = 0; i < n; i++)
   {
      printf("Student %d's name :%s\n",i+1,stu[i].name);
      printf("Student %d's roll no :%d\n",i+1,stu[i].rollno);
      printf("Student %d's marks in english :%.2f\n",i+1,stu[i].engmarks);
      printf("Student %d's marks in hindi :%.2f\n",i+1,stu[i].hinmarks);
       printf("Student %d's marks in math :%.2f\n",i+1,stu[i].matmarks);
      }*/


}