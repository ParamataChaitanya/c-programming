#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("enter the name of the product\n");
	scanf("%s",item);
	for(i=0;item[i]!='\0';i++)
	{
	printf("%c ",item[i]);
	}
	return 0;
}