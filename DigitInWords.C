#include<stdio.h>
int main()
{
	int n;
	printf("Enter a digit\n");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("ZERO\n");
	}
	else if(n==1)
	{
		printf("ONE\n");
	}
	else if(n==2)
	{
		printf("TWO\n");
	}
	else if(n==3)
	{
		printf("THREE\n");
	}
	else if(n==4)
	{
		printf("FOUR\n");
	}
	else if(n==5)
	{
		printf("FIVE\n");
	}
	else if(n==6)
	{
		printf("SIX\n");
	}
	else if(n==7)
	{
		printf("SEVEN\n");
	}
	else if(n==8)
	{
		printf("EIGHT\n");
	}
	else if(n==9)
	{
		printf("NINE\n");
	}
	else
	{
		printf("Enter a Valid Digit(0 - 9 Only)\n");
	}
	printf("Task Completed");
	return 0;
}	