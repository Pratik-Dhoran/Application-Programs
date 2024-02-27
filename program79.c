#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto int ifrq = 0 ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == 21)
        {
            ifrq++ ;
        }
    }

    return ifrq ;

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

    iRet = frequency(ptr,iCount);

    printf("21 occurs %d times \n", iRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}