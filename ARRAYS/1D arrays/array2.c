#include<stdio.h>
int main()
{
    int a1[30],a2[20],i,n,l,a,b;
  
  printf("Enter the number of elements :");
  scanf("%d",&n);
printf("Enter the values :");
for ( i = 0; i < n; i++)              //Adding a element in array
{
    scanf("%d",&a1[i]);
}
 printf("Enter the location to add :");
  scanf("%d",&l);
printf("Enter the value to add :");
scanf("%d",&a);

n++;
b=n;
while (l-1<n)
{   
   a1[n]=a1[n-1];
    n--;
    
}
a1[l-1]=a;
for ( i = 0; i < b; i++)
{
    printf("a1[%d]=%d , ",i,a1[i]);
}
 return 0;
}