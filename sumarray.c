#include<stdio.h>
int main()
{
	int i,sum=0;
	int arr[6]={15,48,67,59,95,85};
	for(i=0;i<6;i++)
{
	sum=sum+arr[i];
}
	printf("sum=%d",sum);
	return 0;
}