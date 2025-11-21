#include<stdio.h>
int main()
{
	char arr[7]={'A','f','f','r','e','e','n'};
	int *ptr;
	char i;
	ptr=&arr[0];
	printf("Accending of array element by using by pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u -> %c\n",(ptr+i),*(ptr+i));
	}
	return 0;
}