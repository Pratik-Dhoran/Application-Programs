#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL Check(int Arr[],int iLength, int iNo)
{
  int iCnt = 0 ;

  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if((Arr[iCnt] )== iNo )
    {
       return TRUE ;
    } 
   
  }
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt =0 , iValue = 0 ;
    int *p = NULL ;
    BOOL bRet = FALSE ;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

     printf("Enter the Number ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }

    printf("Enter %d element\n",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter Elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet =Check(p ,iSize,iValue);

     if (bRet == TRUE)
     {
      printf("Number is present");
     }
     else
     {
      printf("Number is absent");
     }
    
    free(p);

     return 0 ;
}