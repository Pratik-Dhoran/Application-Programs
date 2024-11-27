#include<stdio.h>

void Table(int iNo)
{
    int i ; 
    int iMul=1 ;

  for(i = 10 ; i>=1 ; i--)
  {   
      iMul= iNo*i;
      printf("%d ",iMul);
  }

}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0 ;
}