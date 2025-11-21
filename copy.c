#include<stdio.h>
int main()
{
	FILE *f,*f1;
	f=fopen("note.txt","r");
	f1=fopen("nothing.txt","w+");
	if(f==NULL)
	{
		printf("error reading");
		return 0;
	}
	char ch;
	while (1)
	{
		ch=fgetc(f);
		if(ch==EOF)
		break;
		fputc(ch,f1);
	}
	printf("copying done");
}