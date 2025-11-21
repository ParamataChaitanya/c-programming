#include<stdio.h>
void wish();
int main()
{
	printf("Before wish Call...\n");
	wish();
	printf("After Wish call.....\n");
	return 0;
}
void wish()
{
	printf("Good\n");
	display();
}
void display()
{
	printf("chaitanya\n");
}