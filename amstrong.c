#include<stdio.h>
#include<math.h>
int findamstrongcalculation(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=findamstrongcalculation(n);
	if(n==res)
	{
	printf("given number %d is amstromg number",n);
    }
    else
    {
    	printf("given number %d is not amstromg number",n);
    	return 0;
	}
}
	int findamstrongcalculation(int n)
{
	int digits=(int)log10(n)+1;	
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(int)pow(rem,digits);
		n=n/10;
	}
	return sum;
}


