#include<stdio.h>
void vowel_consonant();
void main()
{
 vowel_consonant();
}
void vowel_consonant()
{
  char ch;
  printf("Enter a latter\n");
  scanf("%c",&ch);
  //a e i o u
  switch(ch) 
  {  
    case 'a':
     printf("It is a vowel\n");
     break;
    case 'e':
     printf("It is a vowel\n");
     break;
    case 'i':
     printf("It is a vowel\n");
     break;
    case 'o':
     printf("It is a vowel\n");
     break;
    case 'u':
     printf("It is a vowel\n");
     break;
    case 'A':
     printf("It is a vowel\n");
     break;
    case 'E':
     printf("It is a vowel\n");
     break;
    case 'I':
     printf("It is a vowel\n");
     break;
    case 'O':
     printf("It is a vowel\n");
     break;
    case 'U':
     printf("It is a vowel\n");
     break;
    default:
     printf("consonant\n");
  }  
}
