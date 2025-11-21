#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = n - 1; i >= 0; i--) // Corrected loop condition
    {
        printf("%d ", arr[i]); // Added a space for better readability
    }
    
    return 0;
}

