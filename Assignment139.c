#include<stdio.h>

typedef int BOOL ;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *Str)
{
    while (*Str != '\0')
    {
    if (*Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u' || *Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U')
    {
        return TRUE ;
    }    
    Str++;
    }

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE ;

    printf("Enter the string :");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel .\n");
    }
    else
    {
        printf("There is no Vowel . \n");
    }
    return 0 ;
}