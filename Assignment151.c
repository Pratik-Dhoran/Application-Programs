#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

struct node
{
    int Data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node* PNODE ;
typedef struct node ** PPNODE ;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL ;
    
    newn =(PNODE)malloc(sizeof(NODE));

    newn->Data = no ;
    newn->next = NULL ;

    if(*Head == NULL)
    {
        *Head = newn ;
    }
    else
    {
        newn->next = *Head ;
        *Head = newn ;
    }
}

int SearchFirstOcc(PNODE Head , int iNo )
{
     PNODE temp = Head ;
     int iCount = 1 ;

    /*/ while( temp!= NULL)
     {
        printf("%d\n",*temp);
        temp =temp->next ;
     }*/

     while(temp->Data != iNo)
     {
        iCount++ ;
        temp = temp->next ;
     }   

     return iCount;
}

int main()
{
    PNODE First = NULL ;
    int iRet = 0 ;
    int iValue =0 ;
    
    InsertFirst(&First , 70);
    InsertFirst(&First , 30);
    InsertFirst(&First , 50);
    InsertFirst(&First , 40);
    InsertFirst(&First , 30);
    InsertFirst(&First , 20);
    InsertFirst(&First , 10);

    printf("Enter the Value you want to Search :");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(First,iValue);

    printf("The element is at position : %d ", iRet);
    return 0 ;
}