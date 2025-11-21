#include<stdio.h>
int main()
{
	int arr[10],i,n,pos,ele;
	printf("enter no of elements (1 to 9)");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position of the element to insert");
	scanf("%d",&pos);
	printf("enter the element to insert");
	scanf("%d",&ele);
	printf("before element isertion in an array\n");
	for(i=0;i<n;i++)
	  printf("%d ",arr[i]);
	printf("\n");
	for(i=n;i>pos-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=ele;
	n++;
	printf("after element insertion in an array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}