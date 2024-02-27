#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto int iSum = 0 ;
    auto int iAvg = 0 ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt] ;
    }

    iAvg = iSum / iSize ;

    return iAvg ;
}

int main()
{
    auto int iCount =0 ;
    auto int *ptr = NULL ;
    auto int iCnt = 0 ;
    auto int iRet = 0 ;

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

    iRet = Average(ptr,iCount);

    printf("The Average of Elements is = %d \n", iRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}