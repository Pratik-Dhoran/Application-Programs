#include<stdio.h>

void DisplaySchedule(char ch)
{
   if (ch =='A' || ch =='a')
   {
    printf("Your Exam is at 7 AM \n");
   }
   else if (ch =='B' || ch =='b')
   {
    printf("Your Exam is at 8:30  AM \n");
   }
   else if (ch =='C' || ch =='c')
   {
    printf("Your Exam is at 9:20 AM \n");
   }
   else if (ch =='D' || ch =='d')
   {
    printf("Your Exam is at 10:30 AM \n");
   }
   else
   {
    printf("Incorrect Division . \n");
   }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Your Division :");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0 ;
}