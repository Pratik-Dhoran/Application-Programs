//Problem Statement : take a value from user and check whether the number is 
//                    EVEN or not .

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE ;
    }
    else
    {
       return FALSE ;
    }
}
int main()
{
   int iValue = 0 ;
   BOOL bRet = FALSE ;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   bRet =ChkEven(iValue);

   if(bRet==TRUE)
   {
    printf("Number is Even ");
   }
   else
   {
    printf("Number is Odd ");
   }  

    return 0 ;
}