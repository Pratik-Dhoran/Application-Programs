#include<stdio.h>

void NonFact(int iNo)
{
  int i ;

  for (i=1 ;i<=iNo ; i++)
  {
    if((iNo%i)==0)
    {
      printf("");
    }
    else
    {
        printf("%d\t",i);
    }
  }

   
}



int main()
{
    int iValue = 0 ;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0 ;
}