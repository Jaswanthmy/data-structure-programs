#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee 
{
    int id ;
    char name[20];
    float salary ;
};
void add_employee(int *i, struct employee *p,int n1)
{
    if(*i<=n1)
    {
        printf("enter employee id : ");
        scanf("%d",&((p+*i)->id));
        printf("enter employee name : ");
        scanf("%s",(p+*i)->name);
        printf("enter employee salary : ");
        scanf("%f",&((p+*i)->salary));
        *i=*i+1;
    }
    else
    {
        printf("limit reached cannot add any more employee\n");
    }
}
void display_employee( int *i, struct employee *p)
{
    if(*i!=0)
    {
        int a;
        printf("employee id    employee name    employee salary\n");
        for(a=0;a<*i;a++)
        {
            printf("%d               %s                 %f\n",(p+a)->id,(p+a)->name,(p+a)->salary);
        }
        printf("\n");
    }
    else
    {
        printf("NO EMPLOYEE PRESENT");
    }
}
void id_search(int *i, struct employee *p)
{
    if(*i!=0)
    {
        int a,b;
        printf("enter employee id to be searched : ");
        scanf("%d",&b);
        for(a=0;a<*i;a++)
        {
            if((p+a)->id == b)
            {
                printf("employee found\n");
                printf("employee details->\nname : %s\nid : %d\nsalary : %f\n",(p+a)->name,(p+a)->id,(p+a)->salary);
            }
            else
            {
                printf("employee not found\n");
            }
        }
        printf("\n");
    }
    else
    {
        printf("NO EMPLOYEE PRESENT");
    }
}
void name_search(int *i, struct employee *p)
{
    if(*i!=0)
    {
        int a,c;
        char b[20];
        printf("enter employee name to be searched : ");
        scanf("%s",b);
        for(a=0;a<*i;a++)
        {
            for(c=0;c<sizeof(b);c++)
            {
                if(((p+a)->name)[c] == b[c])
                {
                    printf("employee found\n");
                    printf("employee details->\nname : %s\nid : %d\nsalary : %f\n",(p+a)->name,(p+a)->id,(p+a)->salary);
                    break;
                }
                else
                {
                    printf("employee not found\n");
                }
            }
        }
        printf("\n");
    }
    else
    {
        printf("NO EMPLOYEE PRESENT");
    }
}
void highest_sal(int *i, struct employee *p)
{
    if(*i!=0)
    {
        int a=0,b;
        float max;
        max=p->salary;
        for(b=1;b<*i;b++)
        {
            if((p+b)->salary > max)
            {
                max=(p+b)->salary;
            }
        }
        for(a=0;a<*i;a++)
        {
            if((p+a)->salary == max)
            {
                printf("employee found with highest salary\n");
                printf("employee details->\nname : %s\nid : %d\nsalary : %f\n",(p+a)->name,(p+a)->id,(p+a)->salary);
            }
            else
            {
                printf("employee not found\n");
            }
        }
        printf("\n");
    }
    else
    {
        printf("NO EMPLOYEE PRESENT");
    }

}
void no_of_employee(int *i)
{
    if(*i!=0)
    {
        printf("number of players present is : %d\n",*i);
        printf("\n");
    }
    else
    {
        printf("NO EMPLOYEE PRESENT");
    }
}
int main()
{
    int n,i=0,n1;
    printf("let total number of employees be\n");
    scanf("%d",&n1);
    struct employee *ptr=(void*)malloc(n1*sizeof(struct employee));
    while(n<7)
    {
        printf("1. add employee\n");
        printf("2. display all employee\n");
        printf("3. search employee by id\n");
        printf("4. search employee by name\n");
        printf("5. employee having highest salary\n");
        printf("6. total number of employees present\n");
        printf("7. EXIT\n");
        printf("\nENTER corresponding number : ");
        scanf("%d",&n);
        if(n<7 || i>n1)
        {
            switch(n)
            {
                case 1:
                {
                    add_employee(&i,ptr,n1);
                    break;
                }
                case 2:
                {
                    display_employee(&i,ptr);
                    break;
                }
                case 3:
                {
                    id_search(&i,ptr);
                    break;
                }
                case 4:
                {
                    name_search(&i,ptr);
                    break;
                }
                case 5:
                {
                    highest_sal(&i,ptr);
                    break;
                }
                case 6:
                {
                    no_of_employee(&i);
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        else if(n>7)
        {
            printf("no corresponding code for this input number.");
        }
        else
        {
            printf("EXIT");
            break;
        }
    }
}