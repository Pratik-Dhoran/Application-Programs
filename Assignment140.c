#include<stdio.h>

void Reverse(char *str)
{   
    int iCnt = 0 ;
     int i = 0 ;
    while(*str != '\0')
    {
       iCnt++;
       str++;
    }
    

    for(i = iCnt ; i >= 0 ;i--)
    {
        printf("%c",*str);
        str--;
    }

}

int main()
{
    char arr[20];
    
    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}