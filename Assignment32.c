#include<stdio.h>

typedef int Bool ;
#define TRUE 1
#define FALSE 0

Bool ChkGreater(int iNo)
{  
   if(iNo>100)
   {
    return TRUE ;
   }
   else if (iNo<100)
   {
     return FALSE ;
   }
}

int main()
{
    int iValue = 0 ;
    Bool bRet = FALSE ;

    printf("Please Enter Number : ");
    scanf("%d",&iValue);
      
    if(iValue == 100)
    {
        printf("You Entered The Same Number ");
    }

    bRet = ChkGreater(iValue);

    if (bRet == TRUE)
    {
        printf("Greater");
    }
    else if (bRet == FALSE)
    {
        printf("Smaller");
    }

    return 0 ;
}
 
  
