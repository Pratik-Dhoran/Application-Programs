#include<stdio.h>


int Difference(int Arr[],int iLength)
{
  int iCnt = 0 ;
  int iMax = Arr[0];
  int iMin = Arr[0];

  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(iMax<Arr[iCnt])
    {
        iMax = Arr[iCnt];
    } 
  }
  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(iMin>Arr[iCnt])
    {
        iMin = Arr[iCnt];
    } 
  }
  return (iMax-iMin);
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

    iRet = Difference(p,iSize);

    printf("the Difference is :%d",iRet);

    free(p);

     return 0 ;
}