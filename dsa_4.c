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
int main()
{
    struct employee E[10];
    int a=0,num,n=1,count=-1;
    next=(struct employee*)malloc(n1*sizeof(struct employee));
    while(a!=6)
    {
        printf("\ncosse any number below for following results\n");
        printf("1. add employee\n");
        printf("2. display all employee\n");
        printf("3. search employee by empid\n");
        printf("4. search employee by name\n");
        printf("5. employee having highest salary\n");
        printf("6. to exit\n");
        scanf("%d",&num);
        if(num!=6)
        {
            switch(num)
            {
                case 1:
                {
                    int i=0;
                    for(i=0;i<10;i++)
                    {
                        if(i+1==n)
                        {
                            printf("ID of employee %d is\n",i+1);
                            scanf("%d",&E[i].empid);
                            printf("salary of employee %d is\n",i+1);
                            scanf("%d",&E[i].salary);
                            printf("name of employee %d is\n",i+1);
                            scanf("%s",E[i].name);
                            count=count+1;
                            n=n+1;
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    int i=0;
                    if(count==-1)
                    {
                        printf("NO EMPLOYEE PRESENT\n");
                    }
                    else
                    {
                        for(i=0;i<count+1;i++)
                        {
                            printf("-->name of employee %d is %s\n",i+1,E[i].name);
                            printf("  ID of employee %d is %d\n",i+1,E[i].empid);
                            printf("  salary of employee %d is %d\n",i+1,E[i].salary);
                        }
                    }
                    break;
                }
                case 3:
                {
                    int i=0,ID,con=-1;
                    printf("ENTER empid to be searched\n");
                    scanf("%d",&ID);
                    if(count==-1)
                    {
                        printf("NO EMPLOYEE PRESENT\n");
                    }
                    else
                    {
                        for(i=0;i<10;i++)
                        {
                            if(E[i].empid==ID)
                            {
                                printf("EMPLOYEE FOUND\nHis name is\n");
                                printf("%s",E[i].name);
                                printf("salary of employee is %d\n",E[i].salary);
                                con=con+1;
                            }
                        }
                        if(con==-1)
                        {
                            printf("NO EMPLOYEE PRESENT\n");
                        }
                    }
                    break;
                }
                case 4:
                {
                    int i=0,j=0,k,size,con=-1,m=0,l=0;
                    char nam[20];
                    printf("Name of employee to be searched is\n");
                    scanf("%s",nam);
                    for(m=0;m<20;m++)
                    {
                        if(nam[m]!='\0')
                        {
                            l=l+1;
                        }
                    }
                    size=n;
                    printf("size of nam is %d\n",size);
                    if(count==-1)
                    {
                        printf("NO EMPLOYEE PRESENT\n");
                    }
                    else
                    {
                        for(i=0;i<10;i++)
                        {
                            k=0;
                            for(j=0;j<size;j++)
                            {
                                if(E[i].name[j]==nam[j])
                                {
                                    k=k+1;
                                }
                            }
                            if(size==k)
                            {
                                printf("EMPLOYEE IS FOUND\nHis name is %s",E[i].name);
                                con=con+1;
                            }
                        }
                        if(con==-1)
                        {
                            printf("NO EMPLOYEE PRESENT\n");
                        }
                    }
                    break;
                }
                case 5:
                {
                    int max,i=0,j=0;
                    if(count==-1)
                    {
                        printf("NO EMPLOYEE PRESENT\n");
                    }
                    else
                    {
                        max=E[0].salary;
                        for(i=1;i<count+1;i++)
                        {
                            if(E[i].salary>max)
                            {
                                max=E[i].salary;
                            }
                        }
                        for(j=0;j<10;j++)
                        {
                            if(E[j].salary==max)
                            {
                                printf("HIGHEST SALARY IS %d\nBY EMPLOYEE - %s\n",max,E[j].name);
                            }
                        }
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
        else
        {
            printf("EXIT\n");
            a=6;
        }
    }
}