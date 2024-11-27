#include<stdio.h>

int MulFact(int iNo)
{
  int i = 0;
  int iSum = 1 ;

  for (i=1;i<=(iNo/2) ; i++)
  {
    if((iNo%i)==0)
    {
      iSum = iSum*i;
    }
  }

    return iSum ;
}



int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);

    return 0 ;
}