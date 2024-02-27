#include<stdio.h>
#include<stdlib.h>

float Maximum(float Arr[] , int iSize)
{
    auto int iCnt =0 ;
    auto float fMax = Arr[0] ;

    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > fMax)
        {
            fMax = Arr[iCnt];
        }
    }

    return fMax ;

}

int main()
{
    auto int iCount =0 ;
    auto float *ptr = NULL ;
    auto int iCnt = 0 ;
    auto float fRet = 0 ;

    printf("Enter Number of elements you want to enter :");
    scanf("%d",&iCount);

    ptr = (float *)malloc(iCount*sizeof(float));
    printf("Dyanamic memory gets allocated.\n");

    printf("Enter the Elements :\n");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        printf("Enter the %d Number : ",iCnt+1);
        scanf("%f",&ptr[iCnt]);
    }

    fRet = Maximum(ptr,iCount);

    printf("The Largest Element is = %f \n", fRet);
    
    free(ptr);

    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}