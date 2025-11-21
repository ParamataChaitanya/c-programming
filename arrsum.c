#include<stdio.h>
int arraySum(int[],int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result=arraySum(arr,n);
	printf("sum of array element is : %d\n",result);
	return 0;
}
int arraySum(int X[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+X[i];
	}
	return sum;
}