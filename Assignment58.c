#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{ 
    int i ;
    int iSum = 0 ;
   if(iStart<0)
    {
        return 0;
    } 
    else
    {
   for(i = iStart ; i <= iEnd ; i++)
   {
     iSum = iSum + i ;
   }
    }

   return iSum ;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0 ;

    printf("Enter Starting Point :");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    iRet =RangeSum(iValue1,iValue2);
    
    if(iRet==0)
    {
        printf("invalid Range ");
    }
    else
    {
    printf("Addition is : %d",iRet);
    }

    return 0 ;
}