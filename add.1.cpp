#include<stdio.h>
int a(int,int);
int main()
{
	int n;
	scan("%d",&n);
	int k=add(n,2);
	printf("%d",k);
}
int a(int n,int ele)
{
   static int sum=0;
	if(ele==0)
	return sum;
	else
	{
		
		
		sum=sum+n%10;
		add(n/10,ele-1);
		
	}
}
