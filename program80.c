#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[] , int iSize ,int iNo)
{
    auto int iCnt =0 ;
    auto int ifrq = 0 ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    auto int iValue = 0 ;

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

    printf("Enter the Element that you want to Search :");
    scanf("%d",&iValue);

    iRet = frequency(ptr,iCount,iValue);

    printf("%d occurs %d times \n",iValue , iRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}