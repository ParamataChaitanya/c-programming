#include<stdio.h>
int main()
{
	int marks[7]={50,60,42,66,45,47,51};
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);
	printf("%d\n",marks[2]);
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	printf("%d\n",marks[5]);
	printf("%d\n",marks[6]);
	int i,sum;
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
		printf("%d",sum);
	}
	return 0;
}