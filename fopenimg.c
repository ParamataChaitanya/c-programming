#include<Stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("spiderman2.jpeg","rb");
	fp2=fopen("spyder.jpeg","wb+");
	if(fp1==NULL || fp2==NULL)
	{
		printf("file connection failed");
		return 2;
	}
	char buffer[1024];
	unsigned int bytesRead;
	while(1)
	{
		bytesRead= fread(buffer,1,sizeof(buffer),fp1);
		if(bytesRead==0)
		break;
		printf("%s",buffer);
		fwrite(buffer,1,sizeof(buffer),fp2);
		
	}
	printf("image copied succesfully");
	
}
