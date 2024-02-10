#include<stdio.h>

void Display(int iNo)
{
   auto int iDigit =0 ;

   iDigit = iNo % 10 ;
   printf("%d\n",iDigit);
   iNo = iNo / 10 ;

   iDigit = iNo % 10 ;
   printf("%d\n",iDigit);
   iNo = iNo / 10 ;

   iDigit = iNo % 10 ;
   printf("%d\n",iDigit);
   iNo = iNo / 10 ;
}

int main()
{
    auto int iValue = 721 ;

    Display(iValue);

    return 0 ;
}