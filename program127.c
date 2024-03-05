// accept character from user check whether it is small or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
   if(cValue >= 97 && cValue<=122)
   {
    return true ;
   }
   else
   {
    return false ;
   }
}

int main()
{
    char ch = '\0';
    bool bRet = false ;

    printf("Enter the Character :");
    scanf("%c",&ch);

    bRet =CheckSmall(ch);

    if(bRet == true)
    {
        printf("%c is a Small letter\n",ch);
    }
    else
    {
        printf("%c is Not a Small letter \n",ch);
    }

    return 0 ;
}