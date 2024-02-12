//Problem statement :  take Numbers from user and store them Dynamically

#include<stdio.h>
#include<stdlib.h>

int main()
{
    auto int iCount = 0 ;
    int * ptr = NULL ;
    auto int iCnt =0 ;

    printf("Enter the Number of Elements :");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int)) ;

    printf("Enter the Numbers :\n");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("The Entered Elements are : \n");

    for(iCnt =0 ; iCnt< iCount ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    printf("\n");

    return 0 ;
}