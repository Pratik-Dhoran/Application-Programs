#include<stdio.h>

int FactDiff(int iNo)
{
  int i ;
  int iSum = 0 ;
  int iSum1 = 0 ;
  int iSum2 = 0 ;

  for (i=1 ;i<=iNo ; i++)
  {
    if((iNo%i)==0)
    {
      iSum1 = iSum1 + i ;
    }
    else
    {
        iSum2 = iSum2+i ;
    }
  }
    iSum = iSum1 - iSum2 ;
   
   return iSum ;
}



int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);
     
     iRet=FactDiff(iValue);
    
    printf("%d",iRet);

    return 0 ;
}