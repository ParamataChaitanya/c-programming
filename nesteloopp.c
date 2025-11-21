#include <stdio.h>
int main()
{
    int i,j,number=1; // Start from 1
    // Loop for the number of rows
    for (i=1;i<=5;i++)
	{
        // Loop for printing numbers in each row
        for (j=1;j<= i;j++)
		{
            printf("%d ",number);
            number++; // Increment the number
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}


