#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i ; 

  for(i = 1 ; i<=(iNo*5) ; i++)
  {
    if((i%iNo)==0)
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

    MultipleDisplay(iValue);

    return 0 ;
}