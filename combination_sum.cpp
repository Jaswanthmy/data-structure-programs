#include<iostream>
#include<vector>
using namespace std;
int k=5;
void f(vector<int> &v1,int a[],int i,int t,int n)
{
    int c;
    if(t<0 || i>=n)
    {
        return;
    }
    else if(t==0)
    {
        for(c=0;c<v1.size();c++)
        {
            printf(" %d ",v1[c]);
        }
        printf("\n");
        return;
    }
    c=a[i];
    t=t-a[i];
    v1.push_back(c);
    f(v1,a,i,t,n);
    t=t+a[i];
    v1.pop_back();
    f(v1,a,i+1,t,n);
}

int main()
{
    int a[3]={1,2,3};
    int i=0,t=5,n=3;
    vector<int>v1;
    f(v1,a,i,t,n);
    return 0;
}