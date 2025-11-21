#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("1.addition\n2.division\n3.multiplicatin\n4.subtraction\n5.equal");
	printf("enter the number");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("a+b=%d",a+b);
			break;
		case 2:
		    printf("a/b=%d",a/b);
			break;
		case 3:
			printf("a*b=%d",a*b);
			break;
		case 4:
		    printf("a-b=%d",a-b);
			break;
		case 5:
		    printf("%d",a==b);
			break;	
		default:
		printf("enter valid");
					
	}
	
}