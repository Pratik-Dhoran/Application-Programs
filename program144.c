//Accept sting from user and check whether it contains vowels in it
// case sensetive 

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char str[])
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str =='o' || *str == 'u')
        {
          return true ;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20] ;
    bool bRet = false ;

    printf("Enter the String :");
    scanf("%[^\n]s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("String Contains Vowels in it .\n");
    }
    else
    {
        printf("There are No Vowels in string");
    }
    return 0 ;
}