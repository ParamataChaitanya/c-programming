#include<stdio.h>
int main()
{
	int salary;
	float HRA,DA,GS;
	scanf("%d",&salary);
	if(salary<=10000);
	{
	HRA=0.2*salary;
	DA=	0.8*salary;
	}
	if(salary>10000 && salary<=20000)
	{
		HRA=0.25*salary;
		DA=0.9*salary;
	}
	else
	{
		HRA=0.3*salary;
		DA=0.95*salary;
	}
	GS=HRA+DA+salary;
	printf("gross salary=%f\n",GS);
	printf("HRA=%f\n",HRA);
	printf("DA=%f\n",DA);
	
	return 0;
}