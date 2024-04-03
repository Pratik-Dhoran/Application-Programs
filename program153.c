// take a string form user and replace Upper Case with  Lower Case


#include<stdio.h>

void StrLwrX(char str[])
{
   while(*str != '\0')
   {
    if(*str >= 'A' && *str<='Z')
    {
        *str = *str+32;
    }
     str++ ;
   } 
}

int main()
{
  char Arr[20] ;

  printf("Enter the String :");
  scanf("%[^\n]s",Arr);

  StrLwrX(Arr);

  printf("Updated String is : %s" ,Arr);
  
  return 0 ;
}