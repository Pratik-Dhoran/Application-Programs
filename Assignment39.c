#include<stdio.h>

void OddDisplay(int iNo)
{
    int i ; 

  for(i = 1 ; i<=iNo ; i++)
  {
    if((i%2)==0)
    {
       printf("");
    }
    else
    {
        printf("%d ",i);
    }
  }

}

int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0 ;
}