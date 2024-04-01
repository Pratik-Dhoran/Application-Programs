//Accept sting  and calculate Tab in string 

#include<stdio.h>

int CountTab(char str[])
{
    int iCnt = 0 ;

    while(*str != '\0')
    {
        if(*str =='\t')
        {
         iCnt++ ;
        }
        str++;
    }
    
    return iCnt ;
}

int main()
{
    char Arr[20] ;
    int iRet = 0 ;

    printf("Enter the String :");
    scanf("%[^\n]s",Arr);

    iRet = CountTab(Arr);

    printf("Count of Tab in string is : %d \n",iRet);

    return 0 ;
}