// n
// n  n-1  n-2  n-3 ... 3  2  1

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        printf("%d\t",iCnt);
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