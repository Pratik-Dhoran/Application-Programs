#include<stdio.h>

int CountTwo(int iNo)
{    
    int iCount = 0 ;
    int iDigit =0 ;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
          if (iDigit == 2)
          {
             iCount = iCount + 1 ;
          }
          iNo = iNo / 10 ;
    }
    return iCount ;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountTwo (iValue);

    printf("%d",iRet);

    return 0 ; 
}