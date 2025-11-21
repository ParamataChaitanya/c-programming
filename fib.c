#include<stdio.h>
void printFibonicci(int n);
int main()
{
	int range;
	scanf("%d",&range);
	printFibonicci("range");
	return 0;
}
void printFibonicci(int n)
{
	int a=0,b=1,c;
	printf("%d %d",a,b);
	c=a+b;
	while(c<=n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
	printf("\n");
}