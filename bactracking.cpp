#include<stdio.h>
void f(int i,int n)
{
	if(i==n+1)
	{
		return;
	}
	f(i+1,n);
	printf("%d ",i);
}

int main()
{
	int n,i=1;
	n=5;
	f(i,n);
}