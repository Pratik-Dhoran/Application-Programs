#include<stdio.h>

int main()
{
    auto char ch = '\0';
    auto int iCnt  =0 ;

    printf("-------------------------------------------\n");
    printf("----------------  ASCII  ------------------\n");
    printf("-------------------------------------------\n");


    for(iCnt = 0 ; iCnt <= 127 ; iCnt++)
    {
      printf("   %c    %d    %o    %x \n",iCnt,iCnt,iCnt,iCnt);
    }
    
    return 0 ;
}














