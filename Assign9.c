//Problem Statement : take a number and frequency from user and display the 
//                    number frequency times

#include<stdio.h>

void Display(int iNo , int iFrequency)
{  
    int Int = 0 ;
    for(Int == 0 ; Int <= iFrequency ; Int ++)
    {
    printf("%d\n",iNo);
    }
}

int main ()
{
  int iValue = 0 ;
  int iCount = 0 ;

  printf("Enter the Value : ");
  scanf("%d",&iValue);

  printf("Enter Frequency :");
  scanf("%d",&iCount);

  Display(iValue,iCount);

  return 0 ;
}