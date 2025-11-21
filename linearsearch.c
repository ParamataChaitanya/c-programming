#include<stdio.h>
int main()
{
	int i,key,n,found;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the key element to search in the given array\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("%d is found in the given array",key);
	}
	else
	{
		printf("%d is not found in the given array",key);
		
	}
	return 0;
}