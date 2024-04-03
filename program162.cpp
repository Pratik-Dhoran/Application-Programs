// accept a number from user and calculate its factorial

#include<iostream>
using namespace std ;

class Number
{
   private :
        int iNo ;

   public :
        Number(int x)
        {
            iNo = x ;
        } 
    
        int Factorial()
        {
            int iCnt = 0 , iFact = 1 ;

            for(iCnt =1 ; iCnt<=iNo ; iCnt++)
            {
                iFact = iFact * iCnt ;
            }
            return iFact ;
        }    

};

int main()
{
    int iValue = 0 , iRet = 0 ;

    cout<<"Enter the Number :";
    cin>>iValue ;
    
    Number nobj(iValue);

    iRet = nobj.Factorial() ;

    cout<<"Factorial is :"<<iRet<<endl ;

    return 0 ;
}