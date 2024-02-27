#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto int iMax = Arr[0] ;
    auto int iMin = Arr[0] ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    printf("Maximum Element is = %d\n",iMax);
    printf("Minimum Element is = %d\n",iMin);

}

int main()
{
    auto int iCount =0 ;
    auto int *ptr = NULL ;
    auto int iCnt = 0 ;

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

    MaxMin(ptr,iCount);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}