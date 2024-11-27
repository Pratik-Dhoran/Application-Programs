#include<stdio.h>

void DisplayASCII()
{   
   int iCnt = 0 ;
    
   for (iCnt = 0 ; iCnt<= 255 ; iCnt++)
   {
      printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
   }
}

int main()
{
    DisplayASCII();

    return 0 ;
}