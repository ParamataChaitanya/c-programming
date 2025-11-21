#include<stdio.h>
int main()
{
	char colour_name;
	scanf("%c",&colour_name);
	
	switch(colour_name)
	{
		case 'v':
			printf("violet");
			break;
		case 'i':
		    printf("indigo");
			break;
		case 'b':
		    printf("blue");
			break;
		case 'g':
		    printf("green");
		case 'y':
		    printf("yellow");
			break;
		case 'o':
		    printf("orange");
			break;
		case 'r':
		    printf("red");
			break;
		default:
		printf("fuck you");
		return 0;						
	}
}