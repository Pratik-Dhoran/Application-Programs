// take a string form user and replace lower Case with  upper Case & upper case
// with lower case


#include<stdio.h>

void StrToggleX(char str[])
{
   while(*str != '\0')
   {
     if(*str >= 'A' && *str<='Z')
    {
        *str = *str+32;
    }
    else if(*str >= 'a' && *str<='z')
    {
        *str = *str-32;
    }
     str++ ;
   } 
}

int main()
{
  char Arr[20] ;

  printf("Enter the String :");
  scanf("%[^\n]s",Arr);

  StrToggleX(Arr);

  printf("Updated String is : %s" ,Arr);
  
  return 0 ;
}