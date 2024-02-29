// n
// A  B  C  D  ....

#include<stdio.h>

void Display(int iNo)
{
   auto int iCnt = 0 ;
   auto char ch = '\0' ;

    for(iCnt = 1 , ch ='A' ; iCnt <= iNo ; iCnt++,ch++)
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