//Problem Statement : take a value from user and Display '*'(using for loop)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt==0;iCnt<iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
   int iValue = 0 ;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    Display(iValue);

   return 0 ;
}