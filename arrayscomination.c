#include<stdio.h>
int main()
{
    int i,j,max,n,k,l;
    int arr[4]={9,5,4,3};
    int arr1[2]={7,8};
    int arr2[6]={7,8,9,5,4,3};
    for(i=0;i<6;i++)
    {
        max=arr2[i];
        for(j=i+1;j<6;j++)
        {
            if(max<arr2[j])
            {
                max=arr2[j];
            }
        }
        for(k=0;k<6;k++)
        {
            if(arr2[k]==max)
            {
                n=k;
                break;
            }
        }
        l=arr2[i];
        arr2[i]=max;
        arr2[n]=l;
        printf("%d ",arr2[i]);
    }
    
}