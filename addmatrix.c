#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter rows and column");
	scanf("%d%d",&r,&c);
	int M1[r][c],M2[r][c],M3[r][c];
	printf("enter the %d element for matrix-A\n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&M1[i][j]);
		}
    }
    printf("enter the %d element for matrix-B\n",r*c);
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&M2[i][j]);
		}
    } 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
			printf("%d ",M3[i][j]);
			
		}
		printf("\n");	
    }
}