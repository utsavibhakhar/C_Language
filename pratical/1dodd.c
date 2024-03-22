#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++) 
	{
        scanf("%d",&arr[i]);
    }
    printf("Odd numbers in the array are: ");
    for (i=0;i<n;i++) 
	{
        if (i%2==0) 
		{
            printf("%d ",i);
        }
    }
    printf("\n");
}


