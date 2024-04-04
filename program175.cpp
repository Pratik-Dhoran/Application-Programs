// Count Capital from string 

#include<iostream>
using namespace std  ;

class String
{
   private :
   char *str ;
   int iSize ;

   public :
   String()
   {
      iSize = 20 ;
      str = new char[20] ; 
   }

   String(int x)
   {
      iSize = x ;
      str =  new char[x];
   }

   ~String()
   {
    delete []str ;
   }

   void Accept()
   {
    cout<<"Enter the String :"<<endl ;
    cin.getline(str,iSize);
   }

   void Display()
   {
    cout<<"String is : "<<str<<endl ;
   }

   int CountCapital()
   {
      int iCnt = 0 ;
      char *temp = str ;

      while(*temp != '\0')
      {
          if(*temp >= 'A' && *temp <= 'Z')
          {
            iCnt++ ;
          }
         temp++ ;
      }
      return iCnt ;
   }
};

int main()
{
int iRet = 0 ;
 String *sobj1 = new String() ;  
 String *sobj2 = new String(30) ;

 sobj1->Accept();
 sobj1->Display(); 

 iRet = sobj1->CountCapital() ;
 cout<<"Number of Capital letters are :"<<iRet<<endl;

 sobj2->Accept();
 sobj2->Display();

 iRet = sobj2->CountCapital() ;
 cout<<"Number of Capital letters are :"<<iRet<<endl;

 delete(sobj1,sobj2);

 return 0 ;

}