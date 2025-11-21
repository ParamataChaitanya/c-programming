#include<stdio.h>
int main()
{   
    int a;
    scanf("%d",&a);
	int i=1;
	while(i<=10)
	{
		int n=i*a;
		printf("%d x %d= %d\n ",a,i,n);
		i++;
	}
	printf("task completed");
	return 0;
}