#include<stdio.h>

void Display(int iNo)
{
   auto int iDigit =0 ;

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  
    iNo = iNo / 10;     
    printf("Value of iNo is : %d\n",iNo);   

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  
    iNo = iNo / 10;     
    printf("Value of iNo is : %d\n",iNo);   

    printf("---------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digits is : %d\n",iDigit);  
    iNo = iNo / 10;     
    printf("Value of iNo is : %d\n",iNo);   
}

int main()
{
    auto int iValue = 0 ;
    
    printf("Enter 3 Digit Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}