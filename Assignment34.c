#include<stdio.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
  int Mul = 0 ;
  Mul = iNo1*iNo2*iNo3 ;
  return Mul ;
}

int main()
{

    int iValue1 = 0 , iValue2 = 0 ,iValue3 = 0 ;
    int iRet = 0 ;

    printf("Please Enter three numbers : ");
    scanf("%d %d %d ",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The Multiplication is : %d ",iRet);

    return 0 ;
}