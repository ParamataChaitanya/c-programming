#include<stdio.h>
#include<string.h>
int main()
{
	int arr[26]={0};
	int i;
	char str[50];
	gets(str);
	printf("before conversion:%s\n");
	strupr(str);
	printf("after coversion:%s\n");
	for(i=0;str[i]!=i;i++)
	{
		arr[str[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		printf("%c -> %d \n",(char)i+65,arr[i]);
	}
}