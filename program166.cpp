
// Addition of even integers of Array

#include<iostream>
using namespace std ;

class Array
{
  private :
     int *Arr ;
     int iSize ;

  public :
     
     Array(int x)
     {
        iSize = x ;
        Arr =new int[iSize] ; 
     }

     ~Array()
     {
        delete []Arr ;
     }

     void Accept()
     {
        int iCnt = 0 ;
      cout<<"Please Enter the Elements: "<<endl ;
        for(iCnt =0 ;  iCnt<iSize ; iCnt++)
        {
            cin>>Arr[iCnt] ;
        }
     }

     void Display()
     {
        int iCnt = 0 ;
         cout<<"Elements of the Array are :"<<endl;
        for(iCnt= 0 ; iCnt<iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        } 
        cout<<endl ;
     }
     
     int AdditionEven()
     {
        int iCnt = 0 , iSum =0  ;

        for(iCnt =0 ;  iCnt<iSize ; iCnt++)
        {
            if((Arr[iCnt]%2)==0)
            {
                iSum= iSum + Arr[iCnt];
            }
        }
        return iSum ;
     }
};

int main()
{
   
   int iLength = 0 , iRet =0  ;

   cout<<"Enter the numbers that you want to store : ";
   cin>>iLength ;

   Array *aobj = new Array(iLength);

   aobj->Accept() ;
   aobj->Display() ;

   iRet = aobj->AdditionEven();

   cout<<"Addition of Even elements is :"<<iRet<<endl ;

   delete aobj ;

    return 0 ;
}