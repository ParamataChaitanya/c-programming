#include<stdio.h>
int main()
{
	int *ptr=(int *) malloc(sizeof(int));
	
	printf("adress of ptr =%u\n",ptr);
	
	*ptr=30;
	
	printf("value at ptr =%d",*ptr);
	
	free(ptr);
	return 0;
}