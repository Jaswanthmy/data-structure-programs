#include<iostream>
#include<vector>
using namespace std;
void f(int arr[],int i,int n,vector<int> &v1)
{
    int k;
    if(i>=n)
    {
        for(k=0;k<v1.size();k++)
        {
            printf("%d ",v1[k]);
        }
        PrintVec(v1);
        printf("\n");
        return;
    }
    k=arr[i];
    v1.push_back(k);
    f(arr,i+1,n,v1);
    v1.pop_back();
    f(arr,i+1,n,v1);
}
int main()
{
    int i=0,n=3;
    int a[3]={1,2,3};
    vector<int> v1;
    f(a,i,n,v1);
    return 0;
}