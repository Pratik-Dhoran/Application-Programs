// take a string form user and replace lower Case with  upper Case

// Using inbuilt function

#include<stdio.h>
#include<string.h>

int main()
{
  char Arr[20] ;

  printf("Enter the String :");
  scanf("%[^\n]s",Arr);

  strupr(Arr);

  printf("Updated String is : %s" ,Arr);
  
  return 0 ;
}