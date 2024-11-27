#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;

    while(*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++ ;
        }
        else 
        {
           iCnt -- ;
        }
        str++;
    }
    return iCnt ;
}

int main()
{
   char arr[20];
   int iRet =0 ;

   printf("Enter string :");
   scanf("%[^'\n']s",arr);

   iRet = Difference(arr);

   printf("%d",iRet);

   return 0;
}