/*documentation
program name:to find area of circle
author:chaitanya
date:2/10/24
time:3:10pm
*/
#include<stdio.h>     //link section
#define PI 3.14       //defintion sectiom
void displayArea();   //function prototype
float area;           //global variable declaration
int main()            //main function
{
	float r;          //local variable declaration
	scanf("%f",&r);
	area=PI*r*r;
	displayArea();
	return 0;
}
void displayArea()
{
	printf("Area=%.2f",area);
}
