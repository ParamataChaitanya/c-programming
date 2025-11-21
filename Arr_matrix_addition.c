#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("enter rows and column\n");
	scanf("%d%d",&row,&col);
	int M1[row][col],M2[row][col],M3[row][col];
	printf("enter the %d element for matrix-A\n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&M1[i][j]);
		}
    }
    printf("enter the %d element for matrix-B\n",row*col);
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&M2[i][j]);
		}
    } 
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
		}	
    }
    printf("Matrix-A\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",M1[i][j]);
		}
		printf("\n");
    }
    printf("Matrix-B\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",M2[i][j]);
		}
		printf("\n");
    }
    printf("Matrix-C\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",M3[i][j]);
		}
		printf("\n");
    }
    return 0;
}