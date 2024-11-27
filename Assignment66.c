#include<stdio.h>

int CountEven(int iNo)
{    
    int iCount = 0 ;
    int iDigit =0 ;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
          if ((iDigit%2)==0)
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

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0 ; 
}