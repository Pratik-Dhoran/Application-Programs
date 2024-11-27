#include<stdio.h>


int Sum(int Arr[],int iLength)
{
  int iCnt = 0 ;
  int iSum = 0 ;
  

  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
     iSum = iSum + Arr[iSum]
  }
  return (iSum);
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt =0  ;
    int *p = NULL ;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

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

    iRet = Sum(p,iSize);

    printf("the Sum of number is :%d",iRet);

    free(p);

     return 0 ;
}