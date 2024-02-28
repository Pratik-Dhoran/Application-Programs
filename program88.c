//  n
//-n  # .... -2  #  -1  #  0  #  1  #  2  #...... n  #

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    auto int iValue = 0;

   printf("Enter the Number : ");
   scanf("%d",&iValue);

   Display(iValue) ;

  return 0 ;
}