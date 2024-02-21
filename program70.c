#include<stdio.h>
#include<stdlib.h>


int OddAddition(int Arr[], int iSize)
{
   auto int iCnt =0 ;
   auto int iSum =0 ;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
        if((Arr[iCnt]%2 ) != 0)
        {
        iSum = iSum + Arr[iCnt];
        }
   }

    return iSum ;
}

int main()
{
    auto int iCount = 0 ;
    auto int *ptr = NULL ;
    auto int i = 0 ; 
    auto int iRet = 0 ;

    printf("Enter the Number of Elements :");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount*sizeof(int));
    printf("Dynamic Memory gets allocated for %d elements\n ",iCount);

    printf("Enter the %d Values :\n",iCount);
    
    for( i =0 ; i <iCount ; i++)
    {
        printf("Enter the Element Number %d  :  ",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet = OddAddition(ptr,iCount);
  
    printf("The Addition of all Odd Elements is = %d\n",iRet);
    
    free(ptr);
    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}