#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	//Reading of Elements into an array
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array element are\n");
	//print th
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}