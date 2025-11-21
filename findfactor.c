#include<stdio.h>
int findfactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf("\nfactors of the given number %d is: %d",n,fact_count);
	return 0;
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
	printf("%d\n",m);
	return count;
}