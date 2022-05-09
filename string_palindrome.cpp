#include<iostream>
using namespace std;
void f(string a,int i,int n)
{
    if(i>=n/2)
    {
        cout<<"true"<<endl;
        return;
    }
    if(a[i]==a[n-i-1])
    {
        f(a,i+1,n);
    }
    else
    {
        cout<<"false"<<endl;
        return;
    }
}

int main()
{
    int i=0,n;
    string a="madm";
    n=a.length();
    f(a,i,n);
    return 0;
}