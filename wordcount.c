#include<stdio.h>
int main()
{
	char name[20];
	int word_count=0,i;
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		word_count++;
	}
	printf("Total number of words:%d\n",word_count+1);

}