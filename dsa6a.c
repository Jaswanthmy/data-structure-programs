#include<stdio.h>
int top=-1;
int n=5;
int stack_arr[100];
void push(int k)
{
    int i;
    if(top== (n-1))
    {
        printf("STACK OVERFLOWN\n");
    }
    else
    {
        top++;
        stack_arr[top]=k;
        printf("element inserted successfully\n");
        printf("elements present in stack are\n");
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack_arr[i]);
        }
        printf("\n");
    }
}
void pop()
{
    int i;
    if(top== -1)
    {
        printf("STACK UNDERFLOWN\n");
    }
    else
    {
        printf("deleted element is %d\n",stack_arr[top]);
        top--;
        printf("elements present in stack are\n");
        if(top!=-1)
        {
            for(i=0;i<=top;i++)
            {
                printf("%d ",stack_arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("no element present\n");
        }
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("top most elements is %d\n",stack_arr[top]);
    }
}
void isempty()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty\n");
    }
}
void isfull()
{
    if(top==(n-1))
    {
        printf("stack is full\n");
    }
    else
    {
        printf("stack is not full\n");
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("no elements in stack\n");
    }
    else
    {
        printf("elements in stack are\n");
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack_arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int i;
    printf("ENTER THE SIZE OF THE STACK\n%d\n",n);
    printf("SELECTED A NUMBER FOR FOLLOWING FUNCTIONS\n");
    printf("1: TO USE PUSH\n");
    printf("2: TO USE POP\n");
    printf("3: TO USE PEEK\n");
    printf("4: TO USE Isempty\n");
    printf("5: TO USE Isfull\n");
    printf("6: TO FIND TOTAL NUMBER OF ELEMENTS\n");
    printf("7: TO USE DISPLAY\n");
    printf("8: TO EXIT\n");
    while(i!=8)
    {
        printf("ENTER THE NUMBER : ");
        scanf("%d",&i);
        if(i!=8)
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
                    peek();
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
                    if(top==-1)
                    {
                        printf("no elements in stack\n");
                    }
                    else
                    {
                         printf("total number of elements are : %d\n",top+1);
                    }
                    break;
                }
                case 7:
                {
                    display();
                    break;
                } 
                default :
                {
                    break;
                }
            }           
        }
        else
        {
            printf("EXIT");
            break;
        }
    }
    return 0;
}