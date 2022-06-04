#include<stdio.h>
int main()
 
 {
     char w;
   printf("Enter a character :");
   scanf("%c",&w);

  
   switch (w)
   {
    case 'a':
       printf("Character %c is a vowel",w);
       break;
        
    case 'e':
       printf("Character %c is a vowel",w);
       break;

    case 'i':
       printf("Character %c is a vowel",w);
       break;

    case 'o':
       printf("Character %c is a vowel",w);
       break;

    case 'u':
       printf("Character %c is a vowel",w);
       break;
       
    case 'A':
       printf("Character %c is a vowel",w);
       break;

    case 'E':
       printf("Character %c is a vowel",w);
       break;

    case 'I':
       printf("Character %c is a vowel",w);
       break;

    case 'O':
       printf("Character %c is a vowel",w);
       break;

    case 'U':
       printf("Character %c is a vowel",w);
       break;
    
    default:
       printf(" character %c is a consonat",w);
       break;
  
   }
   return 0;
 }