//accept a Capital letter from user and return its corresponding small letter 

#include<stdio.h>

char ConvertSmall(char cValue)
{
    return (cValue+32) ;
}


int main()
{
    auto char ch = '\0';
    auto char cRet = '\0' ;

    printf("Enter the Character :");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
       cRet = ConvertSmall(ch);

       printf("The Converted value is :-  %c",cRet);
    }
    else
    {
       printf("Invalid Input \n");
    }

    return 0 ;
}