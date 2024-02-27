#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto int iSum = 0 ;
    auto float fAvg = 0.0f ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    }

    return (float)iSum / (float)iSize  ;
}

int main()
{
    auto int iCount =0 ;
    auto int *ptr = NULL ;
    auto int iCnt = 0 ;
    auto float fRet = 0 ;

    printf("Enter Number of elements you want to enter :");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));
    printf("Dyanamic memory gets allocated.\n");

    printf("Enter the Elements :\n");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        printf("Enter the %d Number : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iCount);

    printf("The Average of Elements is = %f \n", fRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}