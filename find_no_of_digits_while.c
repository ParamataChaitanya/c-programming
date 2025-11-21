#include<stdio.h>
int find_Digits_count(int n)
{
	int digits=0;
	while(n>0)
	{
		int rem=n%10;
		digits++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n;
	scanf("%d",&n);
	int count=find_Digits_count(n);
	printf("no of digits of given number %d is:%d",n,count);
	return 0;
}