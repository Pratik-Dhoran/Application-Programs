#include<stdio.h>

void Pattern(int iNo)
{   
    int i;

    for(i=1; i<=iNo ; i++)
    {
        printf("$\t*\t");
    }

}

int main()
{
    int iValue = 0 ;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}