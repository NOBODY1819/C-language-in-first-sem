#include<stdio.h>
int main()
{ int a[10],i,s,l=0,r=9,m;

 printf("Enter the elements :");
  for ( i = 0; i < 10; i++)
  {
    scanf("%d",&a[i]);
   }

  m=(l+r)/2;

 printf("Enter the element to seacrh :");
  scanf("%d",&s);           //binary search
 if (s==a[0])
 {
    printf("Element a[0] is %d",s);
  }
  
  if(s==a[m])
 {
   printf("Element a[%d]=%d",m,a[m]);
  }
   
 if (s>a[m])
   { printf(" 1 ");
       while (l<r)
       {printf(" 2 ");
          l=m+1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
            break;
           }  
            if (s>a[m])
   { printf(" 1 ");
       while (l<r)
       {printf(" 2 ");
          l=m+1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
            break;
           }  
        }
    }
  
   if(s<a[m])
  {printf(" 3 ");
       while (l<r)
       { printf(" 4 ");
          r=m-1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
            break;
           }  
        }
  }
        }
    }
  
   if(s<a[m])
  {printf(" 3 ");
       while (l<r)
       { printf(" 4 ");
          r=m-1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
           break;
           }  
            if (s>a[m])
   { printf(" 1 ");
       while (l<r)
       {printf(" 2 ");
          l=m+1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
           break;
           }  
        }
    }
  
   if(s<a[m])
  {printf(" 3 ");
       while (l<r)
       { printf(" 4 ");
          r=m-1;
          m=(l+r)/2;
       
          if (s==a[m])
           {
            printf("Element a[%d]=%d",m,a[m]);
           break;
           }  
        }
  }
        }
  }

    

 
printf("\nEND");

 return 0;
}