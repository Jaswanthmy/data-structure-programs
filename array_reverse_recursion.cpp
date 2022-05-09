#include<stdio.h>
void f(int *arr,int l,int r)
{
    if(l==r)
    {
        return;
    }
    int k;
    k=arr[r];
    arr[r]=arr[l];
    arr[l]=k;
    f(arr,l+1,r-1);
}
int main()
{
    int l,r,i;
    int arr[5]={1,2,3,4,5};
    l=0,r=4;
    f(arr,l,r);
    for(i=0;i<=r;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
/* 

f(i)
{
    if(i>=n/2)
    {
        return ;
    }
    swap(a[i],a[n-i-1]);
    f(i+1);
}
*/