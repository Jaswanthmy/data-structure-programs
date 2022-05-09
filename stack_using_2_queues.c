#include<stdio.h>
int q1[10],q2[10];
int rear=0;
void display()
{
    int i;
    for(i=rear-1;i>-1;i--)
    {
        printf("%d | ",q2[i]);
    }
}
void push(int a)
{
    q1[0]=a;
    q2[rear]=q1[0];
    rear++;
    display();
}
void pop()
{
    printf("deleted element is %d",q1[0]);
    rear=rear-1;
    display();
}
int main()
{
    int a,n,t;
    while(n<2)
    {
        scanf("%d",&t);
        switch(t)
        {
            case 0:
            {
                printf("Enter the element to be kept into stack : \n");
                scanf("%d",&a);
                push(a);
                break;
            }
            case 1:
            {
                pop();
                break;
            }
            default :
            {
                n=2;
                printf("no eligible function\n");
                break;
            }
        }
    }
}