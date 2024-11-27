#include<stdio.h>

typedef int Bool ;
#define TRUE 1 
#define FALSE 0 

Bool ChkEqual(int iNo1 , int iNo2)
{
   if(iNo1 == iNo2)
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
   int iValue1 = 0 ;
   int iValue2 = 0 ;
   Bool bRet = FALSE ;

   printf("Please Enter two Numbers : ");
   scanf("%d  %d",&iValue1,&iValue2);

   bRet =ChkEqual(iValue1,iValue2);

   if(bRet == TRUE)
   {
      printf("Equal");
   }
   else
   {
      printf("Not Equal");
   }
   
   return 0 ;
}