#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("%d elements",row*col);
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
		  printf("%d ",arr[i][j]);
		  sum=sum+arr[i][j];
	    }
	     printf("\n");
	     
    }
          printf("%d",sum);
		  return 0;
}