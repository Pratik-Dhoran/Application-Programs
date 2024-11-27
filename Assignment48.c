#include<stdio.h>

int EvenFactorial(int iNo)
{  
  int i ;
  int iMul = 1 ;

  if (iNo < 0 )
  {
    iNo = -iNo ;
  }

  for(i=1 ; i<=iNo ;i++)
  {
    if((i%2)==0)
    {
        iMul = iMul * i ;
    }
  }
    return iMul ; 
}

int main ()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %d",iRet);

    return 0 ;
}