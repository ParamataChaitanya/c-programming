#include<stdio.h>
void increa(int *,int size);
void increa(int *ptr,int size);
{
	int i;
	for(i=0;i<size;i++)
	{
		*(ptr+i)=*(ptr+i)+1;
	}
	printf("the element in the array in increament function are:\n");
	for(i=0;i<size;i++)
	 printf("%d ",*(ptr+i));		
}
int main()
{
	int n,i;
	scanf("%d",&size);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	increa(arr,n);
	
}