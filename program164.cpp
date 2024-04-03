
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

        for(iCnt =0 ;  iCnt<iSize ; iCnt++)
        {
            cin>>Arr[iCnt] ;
        }
     }

     void Display()
     {
        int iCnt = 0 ;
         
        for(iCnt= 0 ; iCnt<iSize ; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        } 
        cout<<endl ;
     }
     
     // logics
};

int main()
{
   
   int iLength = 0 ;

   cout<<"Enter the numbers that you want to store : ";
   cin>>iLength ;

   Array aobj(iLength);

   aobj.Accept() ;
   aobj.Display() ;

    return 0 ;
}