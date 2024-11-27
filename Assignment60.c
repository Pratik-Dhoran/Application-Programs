#include<stdio.h>

void RangeDisplayRev(int iStart , int iEnd)
{ 
    int i ;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
   for(i = iEnd ; i >= iStart ; i--)
   {
     printf("%d  ",i);
   }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting Point :");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0 ;
}