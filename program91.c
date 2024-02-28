// n
// a  a  a  a  ..... n

#include<stdio.h>

void Display(int iNo)
{
   auto int iCnt = 0 ;
   auto char ch = 'a' ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    auto int iValue = 0;

   printf("Enter the Number : ");
   scanf("%d",&iValue);

   Display(iValue) ;

  return 0 ;
}