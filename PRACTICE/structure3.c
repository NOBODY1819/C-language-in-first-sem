#include<stdio.h>
#include<string.h>

struct employe
{
    char name[15];
    int age[5];
    int idnu[5];
    char gender[5];
    int sallary[5];

}emp[3];

int main()
{
    int i;
    printf("\tEnter Employes detail's\t");
    for ( i = 0; i < 3; i++)
    {     
        printf("\nEmploye's details : %d",i+1);
        printf("\nEnter employe's name :");
        scanf("%s",emp[i].name);
        printf("Enter age :");
        scanf("%d",&emp[i].age[i]);
        printf("Enter id number :");
        scanf("%d",&emp[i].idnu[i]);
        printf("Enter gender :");
        scanf("%s",emp[i].gender);
        printf("Enter sallary in Rs :");
        scanf("%d",&emp[i].sallary[i]);
    }
    
    for ( i = 0; i < 3; i++)
    {
    printf("\n\n\tEmploye's details : %d\t",i+1);
        printf("\nEmploye's name : %s",emp[i].name);
         printf("\nAge : %d",emp[i].age[i]);
          printf("\nId number :%d",emp[i].idnu[i]);
           printf("\nGender :%s",emp[i].gender);
           printf("\nSallary in Rs :%d",emp[i].sallary[i]);
    }
    
}