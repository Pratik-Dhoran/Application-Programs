//accept a small letter from user and return its corresponding Capital letter 

#include<stdio.h>

char ConvertCapital(char cValue)
{
    return (cValue-32) ;
}


int main()
{
    auto char ch = '\0';
    auto char cRet = '\0' ;

    printf("Enter the Character :");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
       cRet = ConvertCapital(ch);

       printf("The Converted value is :-  %c",cRet);
    }
    else
    {
       printf("Invalid Input \n");
    }

    return 0 ;
}