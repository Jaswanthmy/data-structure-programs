/* NAME - RAVI GOWRI JASWANTH
   ROLL NUMBER - 20BCS065 */


#include <stdio.h>
# define size 5
int front=-1,rear=-1,elm=0;
int queue[size];
void enqueue(int n)
{
    if(front==-1 && rear ==-1)
    {
        front=0;
        rear=0;
        queue[rear]=n;
        rear++;
        elm++;
    }
    else
    {
         queue[rear]=n;
         rear++;
         elm++;
    }
}
void dequeue()
{
    if(front>rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("deleted number is %d\n",queue[front]);
        front++;
        elm--;
    }
}
void frontnrear()
{
    printf("front element is : %d\n",queue[front]);
    printf("rear element is %d\n",queue[rear-1]);
}
void isempty()
{
    if(front>rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue not empty\n");
    }
}
void isfull()
{
    if(rear== size-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue not empty\n");
    }
}
void numberofelemnts()
{
    printf("total number of elemnts is %d\n",elm);
}
void display()
{
    if(front>rear||(front==-1 && rear==-1))
    {
        printf("queue is empty\n");
    }
    else
    {
        int t=0;
        for(t=0;t<=rear;t++)
        {
            if(t==rear-1)
            {
                printf("%d-->NULL\n",queue[t]);
            }
            else
            {
                printf("%d-->",queue[t]);
            }
        }
    }
}
int main()
{
    int n;
    do
    {
        printf("queue using array:\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front and rear element\n");
        printf("4 : isempty\n");
        printf("5 : isfull\n");
        printf("6 : total no of element\n");
        printf("7 : display\n");
        printf("0 : exit\n");
        printf("enter 0-7 ?  ");
        scanf("%d",&n);
        switch(n)
        {
            case 0:
            {
                printf("EXIT\n");
                break;
            }
            case 1:
            {
                int n1;
                printf("enter number to be pushed into queue ;\n");
                scanf("%d",&n1);
                enqueue(n1);
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                frontnrear();
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
                numberofelemnts();
                break;
            }
            case 7:
            {
                display();
                break;
            }
        }
    } while (n!=0);
}