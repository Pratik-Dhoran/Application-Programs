  #include<stdio.h>

void Display(int iNo)
{
   auto int iDigit =0 ;

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 1
    iNo = iNo / 10;     // 72
    printf("Value of iNo is : %d\n",iNo);   // 72

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 1
    iNo = iNo / 10;     // 72
    printf("Value of iNo is : %d\n",iNo);   // 72

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  // 1
    iNo = iNo / 10;     // 72
    printf("Value of iNo is : %d\n",iNo);   // 72
}

int main()
{
    auto int iValue = 721 ;

    Display(iValue);

    return 0 ;
}