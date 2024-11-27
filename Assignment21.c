
void printEven(int iNo)
{    
    int iCnt = 0 ;
    if(iNo <= 0)
    {
        return -1 ;
    }
    
    for(iCnt = 1 ; iCnt<=(2*iNo) ; iCnt++)
    {
        if(((iCnt%2)==0))
    {
        printf("%d\n",iCnt);
    }
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printEven(iValue);

     return 0 ;
}