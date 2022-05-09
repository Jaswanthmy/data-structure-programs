#include<stdlib.h>
#include<stdio.h>
int queue[4];
int front=-1,rear=-1;
void display()
{
    int i=0;
    if(front==-1&&rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        while(i<4)
        {
            if(queue[i]==-1)
            {
                printf("| - ");
                i++;
            }
            else
            {
                printf("| %d ",queue[i]);
                i++;
            }
        }
        printf("\n");
    }
}
void push(int a)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=a;
        rear++;
    }
    else if(rear>front&&rear<4)
    {
        queue[rear]=a;
        rear++;
    }
    else if(front>rear)
    {
        queue[rear]=a;
        rear++;
    }
    else if(rear>=4)
    {
        if(front>0)
        {
            rear=0;
            queue[rear]=a;
        }
        else
        {
            printf("queue overflow...\n");
        }
    }
    else if(front==rear)
    {
        front=rear=0;
        queue[rear]=a;
        rear++;
    }
    display();
}
void pop()
{
    if(front==-1&&rear==-1)
    {
        printf("queue underflow..\n");
    }
    else if(rear>front)
    {
        printf("poped element is %d\n",queue[front]);
        queue[front]=-1;
        front++;
    }
    else if(front>rear)
    {
        printf("poped element is %d\n",queue[front]);
        queue[front]=-1;
        front++;
    }
    else if(front==rear)
    {
        printf("poped element is %d\n",queue[front]);
        queue[front]=-1;
        front=rear=-1;
    }
    display();
}
int main()
{
    int n;
    int a;
    while(n!=0)
    {
        printf("\nqueue using array:\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("0: Exit\n");
        printf("enter 0-2 ?  ");
        scanf("%d",&n);
        switch(n)
        {
            case 0:
            {
                printf("exited\n");
                break;
            }
            case 1:
            {
                printf("number to be inserted is : ");
                scanf("%d",&a);
                push(a);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            default:
            {
                printf("wrong input...try again\n");
                break;
            }
        }
    }
}