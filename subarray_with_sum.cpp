#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,left=0,right=0,s=15,current_sum=0,c=0;
    while(right<n)
    {
        current_sum = current_sum + arr[right];
        if(current_sum>s)
        {
            left=left+1;
            right=left-1;
            current_sum=0;
        }
        if(current_sum==s)
        {
            printf("%d to %d ",left+1,right+1);
            c++;
            break;
        }
        right++;
    }
    if(c==0)
    {
        printf("-1");
    }
}