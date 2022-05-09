#include<stdio.h>
void length(char arr[20])
{
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
    }
    printf("FINAL LENGTH OF STRING IS : %d\n",i);
}
void reverse(char arr[20])
{
    int i=0,j=0;
    char a;
    for(i=0;arr[i]!='\0';i++)
    {
    }
    if(i%2==0)
    {
        for(j=0;j<i/2;j++)
        {
            a=arr[j];
            arr[j]=arr[i-1-j];
            arr[i-1-j]=a;
        }
    }
    else
    {
        for(j=0;j<(i-1)/2;j++)
        {
            a=arr[j];
            arr[j]=arr[i-1-j];
            arr[i-1-j]=a;
        }
    }
    printf("FINAL STRING AFTER REVERSE IS : %s\n",arr);
}
void copy(char arr1[20],char arr2[20])
{
    int i=0,j=0;
    char a;
    for(i=0;arr1[i]!='\0';i++)
    {
    }
    for(j=0;j<i;j++)
    {
        arr2[j]=arr1[j];
    }
    printf("FINALY AFTER COPYING ARR1 INTO ARRAY 2\n");
    printf("name4[]= %s\n",arr2);
}
int compare(char arr1[20],char arr2[20])
{
    int i=0,j=0,k=0,l=0;
    for(i=0;arr1[i]!='\0';i++)
    {
    }
    for(j=0;arr2[j]!='\0';j++)
    {
    }
    if(i==j)
    {
        for(k=0;k<i;k++)
        {
            if(arr1[k]==arr2[k])
            {
                l=l+1;
            }
        }
    }
    else
    {
        return 1;
    }
    if(l==i)
    {
        return 0;
    }
}
void add(char arr1[50],char arr2[50])
{
    int i=0,j=0,k=0;
    char a;
    for(i=0;arr1[i]!='\0';i++)
    {
    }
    for(j=0;arr1[j]!='\0';j++)
    {
    }
    for(k=0;k<j;k++)
    {
        arr1[i+k]=arr2[k];
    }
    printf("FINALY DEST IS : %s\n",arr1);
}
void palindrome(char arr[20])
{
    int i=0,j=0,k=0;
    char a;
    for(i=0;arr[i]!='\0';i++)
    {
    }
    if(i%2==0)
    {
        for(j=0;j<i/2;j++)
        {
            if(arr[i-1-j]==arr[j])
            {
                k=k+1;
            }
        }
    }
    else
    {
        for(j=0;j<(i-1)/2;j++)
        {
            if(arr[i-1-j]==arr[j])
            {
                k=k+1;
            }
        }
    }
    if(k==i/2)
    {
        printf("STRING IS PALINDROME\n");
    }
    else
    {
        printf("STRING IS NOT PALINDROME\n");
    }
}
void substrng(char arr[20])
{
    char arr1[20];
    printf("enter string 2\n");
    scanf("%s",arr1);
    int i=0,j=0,k=0,l=0,m=0;
    char a;
    for(i=0;arr[i]!='\0';i++)
    {
    }
    for(k=0;arr1[k]!='\0';i++)
    {
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==arr1[0])
        {
            for(l=0;l<k;l++)
            {
                if(arr[j+l]==arr1[l])
                {
                    m=m+1;
                }
            }
            if(m==k)
            {
                printf("SUBSTING FOUND\n");
            }
        }
    }
}
int main()
{
    int k=0,a;
    while(k!=8)
    {
        if(k<8)
        {
            printf("\nenter your choice to perform :\n");
            printf("1 : strlen\n");
            printf("2 : strrev\n");
            printf("3 : strcpy\n");
            printf("4 : strcmp\n");
            printf("5 : strcat\n");
            printf("6 : to check if palindrome\n");
            printf("7 : searching substring\n");
            printf("8 : to exit\n-->");
            scanf("%d",&k);
            switch(k)
            {
                case 1:
                {
                    char name[20];
                    printf("enter string\n");
                    scanf("%s",name);
                    length(name);
                    break;
                }
                case 2:
                {
                    char name1[20];
                    printf("enter string\n");
                    scanf("%s",name1);
                    reverse(name1);
                    break;
                }
                case 3:
                {
                    char name3[20];
                    char name4[20];
                    printf("enter string into name3[] and copy it into name4[]\n");
                    scanf("%s",name3);
                    copy(name3,name4);
                    break;
                }
                case 4:
                {
                    int comp;
                    char name5[20];
                    char name6[20];
                    printf("enter string into name5[] \n");
                    scanf("%s",name5);
                    printf("enter string into name6[] \n");
                    scanf("%s",name6);
                    printf("now campare\n");
                    comp = compare(name5,name6);
                    if(comp==0)
                    {
                        printf("both strings are equal\n");
                    }
                    else
                    {
                        printf("both strings are unequal\n");
                    }
                    break;
                }
                case 5:
                {
                    char dest[50];
                    char src[50];
                    printf("enter string into dest[] \n");
                    scanf("%s",dest);
                    printf("enter string into src[] \n");
                    scanf("%s",src);
                    add(dest,src);
                    break;
                }
                case 6:
                {
                    char a[20];
                    printf("enter string\n");
                    scanf("%s",a);
                    palindrome(a);
                    break;
                }
                case 7:
                {
                    char a1[20];
                    char a2[20];
                    printf("enter string 1\n");
                    scanf("%s",a1);
                    printf("enter string 2\n");
                    scanf("%s",a2);
                    substrng(a1);
                    break;
                }
            }
        }
        else
        {
            printf("exit");
            break;
        }
    }
}
