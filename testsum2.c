#include<stdio.h>
int findfactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf("\nfactors of the given number %d is: %d\n",n,fact_count);
	if(fact_count==2)
	{
		printf("given number %d is a prime number",n);
	}
	else
	{
		printf("given number %d is not prime number",n);
	}
}
int findfactors(int m)
{
	int count=2,i;
	printf("1 ");
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("%d \n",m);
	return count;
}