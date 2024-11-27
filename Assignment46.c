#include<stdio.h>

void Display (int iNo)
{
    int i ; 
  if(iNo<0)
  {
    iNo = - iNo;
  }

  for (i=1 ; i<=iNo ; i++)
  {
    printf("*\t");
  }
  for (i= 1 ; i<=iNo ; i ++)
  {
    printf("#\t");
  }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ; 
}