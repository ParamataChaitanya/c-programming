#include<stdio.h>
int main()
{
	int M[3][5]={{50,60,50,20,30,},{50,52,52,56,52},{50,66,24,58,43}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(i=0;i<5;i++)
		{
			printf("M[%d][%d]=%d",i,j,M[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}