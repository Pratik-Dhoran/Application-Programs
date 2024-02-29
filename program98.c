
//   *   *   *   *    
//   *   *   *   *
//   *   *   *   *
//   *   *   *   * 


#include<stdio.h>

void Display()
{
    auto int iCnt1 = 0 , iCnt2 = 0 ;

    for( iCnt1 = 1 ; iCnt1<=4 ; iCnt1++)
    {
         for(iCnt2 = 1 ; iCnt2 <= 4 ; iCnt2++)
         {
            printf("*\t");
         }
         printf("\n");
    }     
}

int main()
{
   
   Display() ;

  return 0 ;
}