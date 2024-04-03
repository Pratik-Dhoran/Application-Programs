// take a string form user and replace lower Case with  upper Case


#include<stdio.h>

void StrUprX(char str[])
{
   while(*str != '\0')
   {
    if(*str >= 'a' && *str<='z')
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

  StrUprX(Arr);

  printf("Updated String is : %s" ,Arr);
  
  return 0 ;
}