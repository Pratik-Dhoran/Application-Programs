// take a string form user and replace 'A' with _

// case sensitive

#include<stdio.h>

void Replace(char str[])
{
   while(*str != '\0')
   {
    if (*str == 'A')
    {
        *str = '_' ;
    }
     str++ ;
   } 
}

int main()
{
  char Arr[20] ;

  printf("Enter the String :");
  scanf("%[^\n]s",Arr);

  Replace(Arr);

  printf("Updated String is : %s" ,Arr);

  return 0 ;
}