
typedef int Bool ;
#define TRUE 1
#define FALSE 0 

Bool ChkVowel (char cValue)
{    
    char a,e,i,o,u;
    if(cValue == 'a' || cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u' ||
    cValue == 'A' ||cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue =='U')
    {
       return TRUE ;
    }
    else
    {
        return FALSE ;
    }
}

int main()
{
    char CValue = '\0';
    Bool bRet =FALSE ;

    printf("Enter Character :");
    scanf("%c",&CValue);

    bRet = ChkVowel(CValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel ");
    }
    else
    {
        printf("It is Not Vowel ");
    }
}