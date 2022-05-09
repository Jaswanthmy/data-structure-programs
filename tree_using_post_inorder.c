#include<stdio.h>
#include<stdlib.h>
int arr[8];
int count=0;
void tree(int inorder[],int postorder[],int a)
{
    if(a==1)
    {
        printf("only root node possible\n");
    }
    else
    {
        int i=0,j=0,n;
        int A[a];
        int B[a];
        for(j=0;j<a;j++)
        {
            A[j]=inorder[j];
            B[j]=postorder[j];
        }
        for(i=0;i<a;i++)
        {
            if(inorder[i]==postorder[a-1])
            {
                n=i+1;
                arr[count]=inorder[i];
                count++;
            }
        }
        if(a-n>0||n>1)
        {
            for(i=0;i<(a-n);i++)
            {
                inorder[i]=inorder[n+i];
                postorder[i]=postorder[n+i-1];
            }
            if(a-n==1&&n==2)
            {
                arr[count]=inorder[0];
                count++;
                arr[count]=A[0];
                count++;
            }
            else if(n!=2&&a-n==1)
            {
                arr[count]=inorder[0];
                count++;
                if(n!=1)
                {
                    tree(A,B,n-1);
                    return;
                }
            }
            else if(n==2&&a-n!=1)
            {
                tree(inorder,postorder,a-n);
                arr[count]=A[0];
                count++;
            }
            else
            {
                tree(inorder,postorder,a-n);
                tree(A,B,n-1);
            }
        }
    }
}
int main()
{
    int a,i;
    // a are size of arrays(no duplicates present...)
    int postorder[]={8, 4, 5, 2, 6, 7, 3, 1};
    int inorder[]={4, 8, 2, 5, 1, 6, 3, 7};
    a=8;
    tree(inorder,postorder,a);
    printf("\n ELEMENT AT 'i'th POSITION HAS LEFT CHIILD AT '2i+1' POSITION AND RIGHT CHILD AT '2i+2' POSITION\n");
    for(i=0;i<count;i++)
    {
        printf("%d |",arr[i]);
    }
}