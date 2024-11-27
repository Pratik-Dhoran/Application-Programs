#include<stdio.h>

void Table(int iNo)
{
    int i ; 
    int iMul=1 ;

  for(i = 1 ; i<=10 ; i++)
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