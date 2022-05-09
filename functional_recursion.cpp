// prametric
/* 
void f(int i,int sum)
{
    if(i<1)
    {
        printf(sum);
        return;
    }
    f(i-1,sum+i);

}*/

// functional(return type not void i.e returns some value)
#include<stdio.h>
int f(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+f(n-1);
}

int main()
{
    int n,k;
    n=10;
    k=f(n);
    printf("%d",k);
    return 0;
}