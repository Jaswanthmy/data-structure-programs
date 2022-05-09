/* RAVI GOWRI JASWANTH
    20BCS065 */


// ascending oreder priority
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Node
{
  char arr[4];
  int pr;
  struct Node *next;
} *front,*rear, *ptr, *q;
int count=0;
void enqueue()
{
    char arr[4];
    int p;
    struct Node *ptr;
    ptr = (struct Node *) malloc (sizeof (struct Node));
    printf ("Enter the name of process to be insert: ");
    scanf ("%s",ptr->arr);
    printf("its priority : ");
    scanf("%d",&p);
    ptr->pr=p;
    ptr->next=NULL;
    if( front == NULL || p< front->pr )  
    {  
        ptr->next = front;  
        front = ptr;  
    }  
    else  
    {  
        q = front;  
        while( q->next != NULL && q->next->pr<= p)
        {
            q=q->next;  
        }  
        ptr->next = q->next;  
        q->next = ptr;  
    }  
    count++;
    printf ("\nInsertion is Success!!!\n");
    printf("display : ");
}

void dequeue ()
{
    if(front== NULL)
    {
        printf ("\nQueue Underflow!!!\n");
    }
    else
    {
      
        printf ("\nDeleted element: %s\n", front->arr);
        front = front->next;
        count--;
    }
    printf("display : ");
}
void display ()
{
    if (front == NULL)
    {
        printf ("\nQueue is Empty!!!\n");
    }
    else
    {
        struct Node *temp = front;
        while (temp->next != NULL)
        {
        printf ("| %s | %d |--->", temp->arr, temp->pr);
        temp = temp->next;
        }
        printf ("| %s | %d |--->NULL", temp->arr, temp->pr);
    }
}
void frontNrear()
{
    struct Node *temp = front;
    printf("front element is : ");
    printf ("| %s | %d |--->\n", temp->arr, temp->pr);
    printf("\nrear element is : ");
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf ("| %s | %d |--->NULL\n\n", temp->arr, temp->pr);
    printf("display : ");
}
void isempty()
{
    if(count==0)
    {
        printf("queue is empty..\n");
    }
    else
    {
        printf("queue is not empty..\n");
    }
    printf("display : ");
}
void totalelem()
{
    printf("total number of elements are : %d\n",count);
    printf("display : ");
}
int main ()
{
    front=rear=NULL;
    int choice;
    printf ("\n:: Priority Queue using Linked List ::\n");
    while (choice!=0)
    {
        printf ("\n-------- MENU ---------\n");
        printf ("1.Enqueue\n2.dequeue\n3.front and rear elements\n4.isempty\n5.total nmber of elements\n6.Display\n0.Exit\n");
        printf ("Enter your choice: ");
        scanf ("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                enqueue(); 
                display ();
                break;
            }
            case 2:
            {
                dequeue(); 
                display ();
                break;
            }
            case 3:
            {
                frontNrear();
                display ();
                break;
            }
            case 4:
            {
                isempty();
                display ();
                break;
            }
            case 5:
            {
                totalelem();
                display ();
                break;
            }
            case 6:
            {
                display ();
                break;
            }
            case 0:
            {
                printf("\nexited..\n");
                break;
            }
            default:
            {
                printf ("\nWrong selection... Please try again\n");
            }
	    }
    }
    return 0;
}