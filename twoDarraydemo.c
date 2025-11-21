#include<stdio.h>
int main()
{
	int row,col,i,j;
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("enter the %d element\n",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}