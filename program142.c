//Accept sting  and calculate Capital characters in string 

#include<stdio.h>

int CountCapital(char str[])
{
    int iCnt = 0 ;

    while(*str != '\0')
    {
        if(*str >='A' && *str<='Z')
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

    iRet = CountCapital(Arr);

    printf("Count of Capital character in string is : %d \n",iRet);

    return 0 ;
}