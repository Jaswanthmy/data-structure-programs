/* RAVI GOWRI JASWANTH REDDY
    20BCS065 */


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;
int n=0;
void display()
{
    struct node *temp = front;

    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void enqueue(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
    {
        front = rear = newNode;
        n++;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        n++;
    }
    display();
}

void dequeue()
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    if(front == NULL)
         printf("Queue is Empty. Unable to perform dequeue\n");
    else
    {
        printf("deleted element is %d\n",front->data);
        temp = front;
        front = front->next;
        if(front == NULL)
        {
            rear = NULL;
        }
        n--;
        
    }
    display();
}
void frontNback()
{
    printf("front element is : %d and rear element is : %d \n",front->data,rear->data);
}
void isempty()
{
    if(front == NULL && rear == NULL)
    {
        printf("queue is empty..\n");
    }
    else
    {
        printf("queue not empty..\n");
    }
}
void totalelem()
{
    printf("total number of elements are : %d\n",n);
}
int main()
{
    int value, choice=1,a;
    while(choice!=0)
    {
        printf("\n------menu-----\n");
        printf("1: to enqueue\n");
        printf("2: to dequeue\n");
        printf("3: to front and rear elements\n");
        printf("4: to isempty\n");
        printf("5: to find totoal elements\n");
        printf("6: to display\n");
        printf("0: to exit\n");
        printf("enter : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            {
                printf("\nexited\n");
                break;
            }
            case 1:
            {
                printf("enter number to be enqueued : ");
                scanf("%d",&a);
                enqueue(a);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                frontNback();
                break;
            }
            case 4:
            {
                 isempty();
                break;
            }
            case 5:
            {
                 totalelem();
                break;
            }
            case 6:
            {
                display();
                break;
            }
            default:
            {
                printf("wrong selection try again\n");
                break;
            }
        }
    }
}