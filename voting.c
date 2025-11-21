#include<stdio.h>
int main()
{
	int age;
	printf("enter your age=\n");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("Hi! you are eligible for voting\n");
		printf("thanks for using my application\n");
	}
	else
	{
		printf("sorry you are not eligible for voting\n");
		printf("you will need to wait for %d more years to get the vote\n");
	}
    return 0;	
}