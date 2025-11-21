#include<stdio.h>
int main()
{
	char s[30];
	int i;
	int digits_count[10]={0};
	printf("enter any string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	digits_count[s[i]-'0']++;
	}
	printf("Digits count:\n");
	for(i=0;i<10;i++)
	{
		if(digits_count[i]!=10)
		{
		printf("%d -> %d\n",i,digits_count[1]);
	    }
	}
	return 0;
}