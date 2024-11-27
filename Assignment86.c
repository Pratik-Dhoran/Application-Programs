#include<stdio.h>


int Maximum(int Arr[],int iLength)
{
  int iCnt = 0 ;
  int iMax = Arr[0];

  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(iMax<Arr[iCnt])
    {
        iMax = Arr[iCnt];
    } 
  }
  return (iMax);
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

    iRet = Maximum(p,iSize);

    printf("the Largest number is :%d",iRet);

    free(p);

     return 0 ;
}