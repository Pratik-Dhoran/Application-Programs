#include<stdio.h>

float Percentage(int iNo1 , int iNo2)
{
   float Per = 0 ;
   Per = (((float)iNo1/(float)iNo2)*100);
   return Per ;
}

int main()
{
  int iValue1 = 0 ; 
  int iValue2 = 0 ;
  float fRet = 0.0f ;

  printf("Please enter total marks :");
  scanf("%d",&iValue1);

  printf("Please enter obtained marks :");
  scanf("%d",&iValue2);

  fRet = Percentage(iValue1,iValue2);
  printf("The Percentage is : %f ",fRet);

  return 0 ;
}