// Dynamic
// Frame

/*
    iRow = 6
    iCol = 6

  
    #   $   $   $   $   $
    *   #   $   $   $   $
    *   *   #   $   $   $
    *   *   *   #   $   $
    *   *   *   *   #   $
    *   *   *   *   *   #
    

    #   $   $   $   
    *   #   $   $       
    *   *   #   $   
    *   *   *   #   

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    auto int iCnt1 = 0 , iCnt2 = 0 ;

    for( iCnt1 = 1 ; iCnt1<=iRow ; iCnt1++)
    {
         for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
         {
            if(iCnt1 > iCnt2)
            {
                printf("*\t");
            }
            else if (iCnt1 == iCnt2)
            {
                printf("#\t");
            }
            else if (iCnt1 < iCnt2)
            {
                printf("$\t");
            }
         }
         printf("\n");
    }     
}

int main()
{
   auto int iValue1 = 0 , iValue2 = 0 ;

   printf("Enter Number of Rows : ");
   scanf("%d",&iValue1);

   printf("Enter Number of Columns :");
   scanf("%d",&iValue2);
   
   Display(iValue1 , iValue2) ;

  return 0 ;
}
 