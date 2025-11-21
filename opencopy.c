#include <stdio.h>
int main() {
    FILE *fp1,*fp2;
    fp1 = fopen("Substitutes.txt", "r");
    fp2=fopen("details.txt","r");
    if (fp1 == NULL||fp2==NULL) 
	{
        printf("File connection failed\n");
        return 0;
    }
    char ch;
    while(1)
    {
    ch=fgetc(fp1);
	if(ch=EOF)
	break;	
    fputc(ch, fp2);
    }
    printf("Text copied successfully.\n");
    fclose(fp1);
    return 0;
}
