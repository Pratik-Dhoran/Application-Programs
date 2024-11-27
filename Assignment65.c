#include<stdio.h>

int Count(int iNo)
{    
    int iCount = 0 ;
    int iDigit =0 ;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
          if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0 ; 
}