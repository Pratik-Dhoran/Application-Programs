#include<stdio.h>

int SumDigit(int iNo)
{
   auto int iSum =0 ;
   auto int iDigit = 0;

   while(iNo != 0)
   {
     iDigit = iNo % 10 ;
     iSum = iSum + iDigit ;
     iNo = iNo / 10 ;
   }
   return iSum ;
}

int main()
{
    auto int iValue = 0 ;
    auto int iRet = 0 ;
    
    printf("Enter The Number :");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("The Sum of Digits is : %d",iRet);

    return 0 ;
}