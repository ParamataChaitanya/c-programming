#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int *ptr,i;
	ptr=&arr[0];
	printf("Accending of array element by using by pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u -> %d\n",(ptr+i),*(ptr+i));
	}
	return 0;
}