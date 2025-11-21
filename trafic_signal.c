#include<stdio.h>
int main()
{
	char colour_code;
	scanf("%c",&colour_code);
	
	switch(colour_code)
	{
		case 'R':
			printf("stop!!!!!");
			break;
		case 'Y':
		    printf("slow down");
			break;
		case 'G':
		    printf("Go..!!");
			break;
		default:
		printf("enter the valid colour code");
		return 0;			
	}
}