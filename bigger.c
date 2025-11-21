#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("%d is bigger\n",+a);
	}
	else
	{
		printf("%d is bigger\n",b);
		
	}
	if(b>c)
	{
		printf("%d is bigger\n",b);
		
	}
	else
	{
		printf("%d is bigger\n",c);
	}
	return 0;
}
