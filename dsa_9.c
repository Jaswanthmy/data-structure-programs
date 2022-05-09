/* RAVI GOWRI JASWANTH REDDY
    20BCS065 */


#include<stdio.h>
#define MAX 5
int queue[MAX], f=-1, r=-1;
void display()
{
    int i=f;
    if(f==-1 && r==-1)
    {
        printf("Queue is empty..\n");
    }
    else
    {
        printf("Elements in a Queue are : \n");
        for(i=0;i<MAX;i++)
        {
            if(queue[i]==0)
            {
                printf(" - |");
            }
            else
            {
                printf(" | %d",queue[i]);
            }
        }

    }
}
void enqueue( int a)
{
    if(f==-1 && r==-1) 
    {
        f=0;
        r=0;
        queue[r]=a;
    }
    else if((r+1)%MAX==f) 
    {
        printf("Queue is overflow..\n");
    }
    else
    {
        r=(r+1)%MAX;
        queue[r]=a; 
        printf("element inserted successfully\n");
    }
    display();
}
void dequeue()
{
    if((f==-1) && (r==-1))
    {
        printf("queue is underflow..");
    }
    else if(f==r)
    {
        printf("The dequeued element is %d\n",queue[f]);
        queue[f]=0;
        f=-1;
        r=-1;
    }
    else
    {
        printf("The dequeued element is %d\n",queue[f]);
        queue[f]=0;
        f=(f+1)%MAX;
    }
    display();
}
void frontNback()
{
    if((f==-1) && (r==-1))
    {
        printf("queue is underflow..");
    }
    else
    {
        printf("front and rear elements are : %d and %d .",queue[f],queue[r]);
    }
}
void isempty()
{
    if((f==-1) && (r==-1))
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue NOT empty\n");
    }
}
void isfull()
{
    if((r+1)%MAX==f) 
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("queue NOT full\n");
    }
}
void totalelem()
{
    if((f==-1) && (r==-1))
    {
        printf("0 element present\n");
    }
    else
    {
        if(r>f)
        {
            printf("%d elements present\n",r-f+1);
        }
        else if(r<f)
        {
            printf("%d elements present\n",r-f+6);
        }
        else
        {
            printf("0 element present\n");
        }
    }
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
        printf("5: to isfull\n");
        printf("6: to find totoal elements\n");
        printf("7: to display\n");
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
                isfull();
                break;
            }
            case 6:
            {
                totalelem();
                break;
            }
            case 7:
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