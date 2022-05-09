
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *prev;
    struct node *next;
}*ptr=NULL,*head=NULL;
int count=0;
void display()
{
    struct node *temp=head;
    if(count==0)
    {
        printf("list is empty...\n");
    }
    else
    {
        printf("Display -- ");
        while(temp!=NULL)
        {
            printf(" %d | ",temp->val);
            temp=temp->next;
        }
        printf("\n");
    }
}
void insertend(int a)
{
    struct node *temp=head;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->val=a;
    ptr->next=NULL;
    ptr->prev=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        ptr->prev=temp;
        temp->next=ptr;
    }
    count++;
    display();
}
void minelement()
{
    int min;
    struct node *temp=head;
    if(count==0)
    {
        printf("Linked list is empty...no minimum element\n");
    }
    else
    {
        min=head->val;
        temp=temp->next;
        while(temp!=NULL)
        {
            if(min>temp->val)
            {
                min=temp->val;
            }
            temp=temp->next;
        }
        printf("Minimum element in linked list is : %d\n",min);
        display();
    }
}
int main()
{
    int value, choice=1,a,b,c;
    while(choice!=0)
    {
        printf("\n------menu-----\nRAVI GOWRI JASWANTH\n20BCS065\n");
        printf("1: to insert at end\n");
        printf("2: to find minimum element\n");
        printf("3: to display\n");
        printf("0: to exit\n");
        printf("enter 0-3  : ");
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
                printf("enter number to be inserted : ");
                scanf("%d",&b);
                insertend(b);
                break;
            }
            case 2:
            {
                minelement();
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