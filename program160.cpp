// accept a number from user and calculate its factorial

#include<iostream>
using namespace std ;

int Factorial(int iNo)
{
  int iCnt = 0 ;  
  int iFact = 1 ;

  for(iCnt= 1 ; iCnt<=iNo ; iCnt++)
  {
    iFact = iFact*iCnt ;
  }

  return iFact ;

}

int main()
{
    int iValue =  0 ;
    int iRet = 0 ;

    cout<<"Enter the Number :";
    cin>>iValue ;

    iRet = Factorial(iValue);

    cout<<"The Factorial is :"<<iRet<<endl ;

    return 0 ;
}