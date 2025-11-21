#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s;
	printf("enter sides of triangl\n");
	scanf("%d%d%d",&a,&b,&c);
	//area=sqrt(s(s-a)(s-b)(s-c))
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("side-1=%d",&a);
	printf("side-2=%d",&b);
	printf("side-3=%d",&c);
	printf("area of triangle=%.2lf",area);	
}