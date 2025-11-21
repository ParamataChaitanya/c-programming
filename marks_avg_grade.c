#include<stdio.h>
int main()
{
	int m,p,c,e,h,total;
	float avg,percentage;
	printf("maths=");
	scanf("%d",&m);
	printf("physics=");
	scanf("%d",&p);
	printf("chemistry=");
	scanf("%d",&c);
	printf("english=");
	scanf("%d",&e);
	printf("hindi=");
	scanf("%d",&h);
    total=(m+p+c+e+h);
	printf("total=%d\n",total);
	avg=total/5;
	printf("avg=%f\n",avg);
	if(m>=40 && p>=40 && c>=40 && e>=40 && h>=40 )
	{
		printf("pass");
	}
	else
	{
	    printf("fail");
	}
	
	
	
	
	
}