#include<stdio.h>
int main()
{
	int age;
	printf("enter your age=");
	scanf("%d",&age);
	if(age<=2)
	{
	 printf("INFANT");
	}
	else if(age>=3 && age<=12)
	{
	printf("CHILD");
    }
    else if(age>=13 && age<=19)
    {
    	printf("TEEN");
	}
	else if(age>=20 && age<=64)
	{
		printf("ADULT");
	}
	else if(age>=65)
	{
		printf("SENIOR");
	}
	return 0;
	
}