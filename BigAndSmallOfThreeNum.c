#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any there numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b>c)
	{
		printf(" Largest=%d\n Smallest=%d",a,c);
	}
	else if(b>c>a)
	{
		printf(" Largest=%d\n Smallest=%d\n",b,a);
	}
	else if(c>a>b)
	{
		printf(" Largest=%d\n Smallest=%d\n",c,b);
	}
	else
	{
		printf("task incomplete");
	}
	return 0;
}