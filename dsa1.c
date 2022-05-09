#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void search_change(char str1[100],char str2[100],char str3[100])
{
                int s2size,s3size,s1size,i,j,k,l=0,n,n1,n2,h0,r1,r2,r3;
                char t;
                for(r1=0;r1<100;r1++)
                {
                    if(str1[r1]=='\0') 
                    {
                        break;
                    }
                }
                s1size=r1;
                for(r2=0;r2<100;r2++)
                {
                    if(str2[r2]=='\0') 
                    {
                        break;
                    }
                }
                s2size=r2;
                for(r3=0;r3<100;r3++)
                {
                    if(str3[r3]=='\0') 
                    {
                        break;
                    }
                }
                s3size=r3;
                for(i=0;i<s1size;i++)
                {
                    if(str1[i]==str2[0])
                    {
                        k=0;
                        for(j=0;j<s2size;j++)
                        {
                            if(str1[i+j]==str2[j])
                            {
                                k++;
                            }
                        }
                        if(k==s2size)
                        {
                            l++;
                            n=s3size-s2size;
                            if(n>0)
                            {
                                for(n1=s1size-1;n1>(i+s2size-1);n1--)
                                {
                                    str1[n1+n]=str1[n1];
                                }
                                for(n2=0;n2<s3size;n2++)
                                {
                                    str1[i+n2]=str3[n2];
                                }
                            }
                            else if(n==0)
                            {
                                for(n2=0;n2<s3size;n2++)
                                {
                                    str1[i+n2]=str3[n2];
                                }
                            }
                            else
                            {
                                for(n1=i+s3size;n1<s1size+n;n1++)
                                {
                                    str1[n1+n]=str1[n1];
                                }
                                for(n2=0;n2<s3size;n2++)
                                {
                                    str1[i+n2]=str3[n2];
                                }
                            }
                        }
                    }
                }
                if(n<0&&l>0)
                {
                    printf("word found and changed\n");
                    printf("string after change is : \n");
                    for(h0=0;h0<s1size+n-1;h0++)
                    {
                        printf("%c",str1[h0]);
                    }
                    printf("\n");
                }
                else if(n>0&&l>0)
                {
                    printf("word found and changed\n");
                    printf("string after change is : \n");
                    for(h0=0;h0<s1size+n;h0++)
                    {
                        printf("%c",str1[h0]);
                    }
                    printf("\n");
                }
                else if(n==0&&l>0)
                {
                    printf("word found and changed\n");
                    printf("string after change is : %s\n",str1);
                }
                else if(l==0)
                {
                    printf("no match found\n");
                }
}
int main()
{
    int i1,n3;
    char str1[100];
    char str2[100];
    char str3[100];
    printf("enter string 1 : \n");
    for(i1=0;i1<100;i1++)
    {
        scanf("%c",&str1[i1]);
        if(str1[i1]=='.')
        {
            break;
        }
    }
    while(n3!=0)
    {
        printf("enter\n");
        printf("1 : to search string and replace\n");
        printf("0 : end serach\n");
        printf("--> ");
        scanf("%d",&n3);
        switch(n3)
        {
            case 0:
            {
                printf("\nsearch ended\n");
                break;
            }
            case 1:
            {
                printf("enter word to be searched\n");
                scanf("%s",str2);
                printf("enter the word with which to be replaced\n");
                scanf("%s",str3);
                search_change(str1,str2,str3);
                break;
            }
        }
    }
}