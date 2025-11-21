#include<stdio.h>
int main()
{
	double c,f,k;
	int option;
	printf("1.celcius to fahrenheit\n2.fahrenheit to celcius\n3.celcius to kelvin\n");
	printf("enter your choise(1-3)\n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			   printf("enter the celsius value\n");
			   scanf("%lf",&c);
			   f=(double)(c*9/5)+32;
			   printf("c=%.2lf and f=%.2lf\n",c,f);
			   break;
			   
		case 2:
			   printf("enter the fahrenheit value\n");
			   scanf("%lf",&f);
			   c=(f-32)*5.0/9;
			   printf("f=%.2lf and c=%.2lf\n",f,c);
			   break;
		case 3:
			   printf("enter the celcius value\n");
			   scanf("%lf",&c);
			   k=c+273.15;
			   printf("c=%.2lf and k=%.2lf\n",c,k);
			   break;
		deafult:
		       printf("enter valid option");
			   break;
			   return 0;	   
	}
}