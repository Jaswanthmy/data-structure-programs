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
int main()
{
    struct employee *ptr ;
    int n1,n2;
    printf("ENTER THR NUMBER OF EMPLOYEES CAN BE PRESENT\n");
    scanf("%d",&n1);
    ptr=(struct employee*)malloc(n1*sizeof(struct employee));
    int a=0,num,n=1,count=-1;
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
        scanf("%d",&num);
        if(num!=7)
        {
            switch(num)
            {
                case 1:
                {
                    int i=0;
                    for(i=0;i<n1;i++)
                    {
                        if(i+1==n)
                        {
                            printf("ID of employee %d is\n",i+1);
                            scanf("%d",&(ptr+i)->empid);
                            printf("salary of employee %d is\n",i+1);
                            scanf("%d",&(ptr+i)->salary);
                            printf("name of employee %d is\n",i+1);
                            scanf("%s",(ptr+i)->name);
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
                            printf("-->name of employee %d is %s\n",i+1,(ptr+i)->name);
                            printf("  ID of employee %d is %d\n",i+1,(ptr+i)->empid);
                            printf("  salary of employee %d is %d\n",i+1,(ptr+i)->salary);
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
                        for(i=0;i<n1;i++)
                        {
                            if((ptr+i)->empid==ID)
                            {
                                printf("EMPLOYEE FOUND\nHis name is ");
                                printf("%s\n",(ptr+i)->name);
                                printf("salary of employee is %d\n",(ptr+i)->salary);
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
                        for(i=0;i<n1;i++)
                        {
                            k=0;
                            for(j=0;j<size;j++)
                            {
                                if((ptr+i)->name[j]==nam[j])
                                {
                                    k=k+1;
                                }
                            }
                            if(size==k)
                            {
                                printf("EMPLOYEE IS FOUND\nHis name is %s",(ptr+i)->name);
                                printf("ID IS %d\n SALARY IS %d\n",(ptr+i)->empid,(ptr+i)->salary);
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
                        max=(ptr+0)->salary;
                        for(i=1;i<count+1;i++)
                        {
                            if((ptr+i)->salary>max)
                            {
                                max=(ptr+i)->salary;
                            }
                        }
                        for(j=0;j<n1;j++)
                        {
                            if((ptr+j)->salary==max)
                            {
                                printf("HIGHEST SALARY IS %d\nBY EMPLOYEE - %s\n\n",max,(ptr+j)->name);
                            }
                        }
                    }
                    break;
                }
                case 6 :
                {
                    if(n>1)
                    {
                        printf("TOTAL NUMBER OF EMPLOYEES ARE- %d\n",n-1);
                    }
                    else
                    {
                        printf("NO EMPLOYEE PRESENT\n");
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
            a=7;
        }
    }
}