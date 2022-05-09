#include<stdio.h>
#include<stdlib.h>
int n=-1;
struct node
{
    int a;
    struct node *next;
};
struct node *top=NULL;
struct node *ptr;
struct node *pt;
void push(int k)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->a=k;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
        n++;
    }
    else
    {
        ptr->next=top;
        top=ptr;
        printf("-->element inserted succesfully\n");
        n++;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("-->stack underflow\n");
    }
    else
    {
        printf("-->element deleted is : %d\n",top->a);
        top=top->next;
        n--;
    }
}
void isempty()
{
    if(top==NULL)
    {
        printf("-->stack is empty\n");
    }
    else
    {
        printf("-->stack is not empty\n");
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("-->stack is empty\n");
    }
    else
    {
        printf("-->top most elements is : %d\n",top->a);
    }
}
void display()
{
    int i;
    pt=top;
    if(top==NULL)
    {
        printf("-->no elements in stack\n");
    }
    else
    {
        printf("-->elements in stack are : ");
        for(i=0;i<n+1;i++)
        {
            printf("%d ",pt->a);
            pt=pt->next;
        }
    }
    printf("\n");
}
int main()
{
    int i;
    printf("SELECTED A NUMBER FOR FOLLOWING FUNCTIONS\n");
    printf("1: TO USE PUSH\n");
    printf("2: TO USE POP\n");
    printf("3: TO USE Isempty\n");
    printf("4: TO USE PEEK\n");
    printf("5: TO FIND TOTAL NUMBER OF ELEMENTS\n");
    printf("6: TO USE DISPLAY\n");
    printf("7: TO EXIT\n");
    while(i<7 || i>0 || (i!=7))
    {
        printf("ENTER THE NUMBER : ");
        scanf("%d",&i);
        if(i!=7)
        {
            switch(i)
                {
                    case 1:
                    {
                        int k;
                        printf("\nenter element to be sent \n");
                        scanf("%d",&k);
                        push(k);
                        break;
                    }
                    case 2:
                    {
                        pop();
                        break;
                    }
                    case 3:
                    {
                        isempty();
                        break;
                    }
                    case 4:
                    {
                        peek();
                        break;
                    }
                    case 5:
                    {
                        if(n==-1)
                        {
                            printf("-->no elements in stack\n");
                        }
                        else
                        {
                            printf("-->total number of elements are : %d\n",n+1);
                        }
                        break;
                    }
                    case 6:
                    {
                        display();
                        break;
                    }
                    default :
                    {
                        printf("-->INCORRECT CHOICE\n");
                        break;
                    }
            }
        }
        else
        {
            printf("-->EXIT");
            break;
        }
    }   
}