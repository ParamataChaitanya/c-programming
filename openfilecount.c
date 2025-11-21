#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Substitutes.txt","r");
	if(fp1==NULL)
	{
		printf("File connection lost\n");
		return 1;
	}
	char ch,char_count,line_count,words_count;
	int number_count=0;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		break;
		printf("%c",ch);
		char_count++;
		if(ch==' '||ch=='\n')
		words_count++;
		if(ch='\n')
		line_count++;
		if(number_count>='0'&&number_count<='9')
		number_count++;
	}
	printf("Charecters count=%d\n",char_count);
	printf("Words count=%d\n",words_count);
	printf("Line count=%d\n",line_count);
	printf("no of numbers=%d",number_count);
	fclose(fp1);
}