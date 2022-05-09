#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node* ptr;
int n=0;
void display()
{
    int i,j,k;
    k=n;
    struct node *temp ;
    temp=front;
    if(n==0)
    {
        printf("queue is empty..\n");
    }
    else
    {
        while(k>0)
        {
                printf("%d |",temp->val);
                temp=temp->next;
                k--;
        }
    }
    printf("\n");
}
void enqueue(int a)
{
    ptr = malloc(sizeof(struct node));
    ptr->val=a;
    if(front==NULL&&rear==NULL)
    {
        ptr->next=NULL;
        front=ptr;
        rear=ptr;
        n++;
    }
    else
    {
        ptr->next=rear;
        rear=ptr;
        n++;
    }
    printf("element sucssessfully added..\n");
    display();
}
void dequeue()
{
    int i;
    struct node *temp;
    temp=rear;
    if(n==0)
    {
        printf("queue is empty..\n");
    }
    else
    {
        printf("deleted element is %d\n",front->val);
        front=front->next;
        n--;
    }
    display();
}
int main()
{
    int value, choice=1,a;
    while(choice!=0)
    {
        printf("\n------menu-----\n");
        printf("1: to enqueue\n");
        printf("2: to dequeue\n");
        printf("3: to display\n");
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