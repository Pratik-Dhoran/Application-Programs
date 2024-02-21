#include<stdio.h>
#include<stdlib.h>


int OddCount(int Arr[], int iSize)
{
   auto int iCnt =0 ;
   auto int iOddCnt =0 ;

   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
        if((Arr[iCnt]%2) != 0)
        {
           iOddCnt++ ;
        }
   }

    return iOddCnt ;
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

    iRet = OddCount(ptr,iCount);
  
    printf("There are %d Odd Elements .\n",iRet);
    
    free(ptr);
    printf("Dynamic Memory gets deallocated Sucessfully.\n");

    return 0 ;
}