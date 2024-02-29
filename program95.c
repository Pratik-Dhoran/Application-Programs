// n
// A  B  C  D  ....

#include<stdio.h>

void Display(int iNo)
{
   auto int iCnt = 0 ;
   auto char ch = 'A' ;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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