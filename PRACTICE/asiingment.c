#include<stdio.h>
float tot(float x[10],int y);
struct student
{
    char name[20];
    int roll;
    float marks[10];
    
}st[100];


int main()
{    int n,i,s;
    printf("Enter no. of student's : ");
    scanf("%d",&n);
    printf("Enter no. of subjects :");
    scanf("%d",&s);
    for ( i = 0; i < n; i++)
    {
        printf("Enter detail of student %d\n",i+1);
        printf("Enter name : ");
        scanf("%s",&st[i].name);
        printf("Enter roll no. : ");
        scanf("%d",&st[i].roll);              
     for (int j = 0; j < s; j++)
     {
         
        printf("Enter marks of sbject %d : ",j+1);
        scanf("%f",&st[i].marks[j]);
    }
    }
printf("Name\tRoll no.\tTotal marks\n");
for ( i = 0; i < n; i++)
{
    printf(" %s \t %d \t %.2f\n",st[i].name,st[i].roll,tot(st[i].marks,s));
}

    return 0;
}

float tot(float x[10],int y)
{ float t=0;
    for ( int i = 0; i < y; i++)
    {
        t=t+x[i];
    }
    return t;
}