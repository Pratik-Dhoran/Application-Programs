#include<stdio.h>

int FactDiff(int iNo)
{
  int i ;
  int iSum;

  for (i=1 ;i<=iNo ; i++)
  {
    if((iNo%i)==0)
    {
      printf("");
    }
    else
    {
        iSum = iSum+i ;
    }
  }
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