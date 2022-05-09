/* RAVI GOWRI JASWANTH REDDY
    20BCS065 
    SEC-B                   */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
    int empid;
    char name[20];
    int salary;
    struct employee *next;
};
struct employee *top;
struct employee *ptr;
void addemployee(int i)
{
    ptr=(struct employee*)malloc(sizeof(struct employee));
    printf("ID of employee %d is\n",i);
    scanf("%d",&(ptr)->empid);
    printf("salary of employee %d is\n",i);
    scanf("%d",&(ptr)->salary);
    printf("name of employee %d is\n",i);
    scanf("%s",(ptr)->name);
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
}
void displayemp(int i)
{
    struct employee *pop;
    pop=top;
    if(i==0)
    {
        printf("NO EMPLOYEE PRESENT\n");
    }
    else
    {
        printf("NUMBER OF EMPLOYEES ARE  : %d\n",i);
        printf("EMPLOYEE DETAILS ARE\nID    SALARY    NAME\n");
        int j=0;
        for(j=0;j<i;j++)
        {
            printf(" %d       %d          %s\n",pop->empid,pop->salary,pop->name);
            pop=pop->next;
        }
    }
}
void searchID(int i,int ID)
{
    struct employee *pop;
    pop=top;
    if(i==0)
    {
        printf("NO EMPLOYEE PRESENT\n");
    }
    else
    {
        int j=0;
        for(j=0;j<i;j++)
        {
            if(pop->empid==ID)
            {
               break;
            }
            else
            {
                pop=pop->next;
            }
        }
        printf("EMPLOYEE FOUND\nID    SALARY     NAME\n");
        printf(" %d      %d         %s\n",pop->empid,pop->salary,pop->name);
    }
}
void searchNAME(int i,char arr[20])
{
    struct employee *pop;
    pop=top;
    int k=0,l=0,m=0;
    for(k=0;arr[k]!='\0';k++)
    {
    }
    if(i==0)
    {
        printf("NO EMPLOYEE PRESENT\n");
    }
    else
    {
        int j=0;
        for(j=0;j<i;j++)
        {
            l=0;
            for(l=0;l<k;l++)
            {
                if((pop)->name[j]==arr[j])
                {
                    m=m+1;
                }
            }
            if(m==k)
            {
                printf("EMPLOYEE IS FOUND\nHis name is %s\n",(pop)->name);
                printf("ID IS %d\n SALARY IS %d\n",(pop)->empid,(pop)->salary);
                break;
            }
            else
            {
                pop=pop->next;
            }
        }
    }
}
void highestsal(int i)
{
    struct employee *pop;
    struct employee *pok;
    pop=top;
    pok=top;
    int max,j=0,k=0;
    max=pop->salary;
    pop=pop->next;
    if(i==0)
    {
        printf("NO EMPLOYEE PRESENT\n");
    }
    else
    {
        for(j=1;j<i;j++)
        {
            if(pop->salary > max )
            {
                max=pop->salary;
            }
            pop=pop->next;
        }
        printf("DETAILS OF EMPLOYEE WITH HIGHEST SALARY\n");
        for(k=0;k<i;k++)
        {
            if(max==pok->salary)
            {
                printf("EMPLOYEE FOUND\nID    SALARY     NAME\n");
                printf(" %d      %d         %s\n",pok->empid,pok->salary,pok->name);
                break;
            }
            pok=pok->next;
        }
    }
}
int main()
{
    top=NULL;
    int a=0,i=0;
    while(a!=7)
    {
        printf("\nchoose any number below for following results\n");
        printf("1. add employee\n");
        printf("2. display all employee\n");
        printf("3. search employee by empid\n");
        printf("4. search employee by name\n");
        printf("5. employee having highest salary\n");
        printf("6. total number of employees present\n");
        printf("7. to exit\n");
        scanf("%d",&a);
        if(a!=7)
        {
            switch(a)
            {
                case 1:
                {
                    i=i+1;
                    addemployee(i);
                    break;
                }
                case 2:
                {
                    displayemp(i);
                    break;
                }
                case 3:
                {
                    int ID;
                    printf("enter id to be serached : ");
                    scanf("%d",&ID);
                    searchID(i,ID);
                    break;
                }
                case 4:
                {
                    char arr[20];
                    printf("enter name to be serached : ");
                    scanf("%s",arr);
                    searchNAME(i,arr);
                    break;
                }
                case 5:
                {
                    highestsal(i);
                    break;
                }
                case 6:
                {
                    printf("TOTAL NUMBER OF EMPLOYESS ARE : %d\n",i);
                    break;
                }
            }
        }
        else
        {
            printf("EXIT\n");
            break;
        }
    }
    return 0;
}