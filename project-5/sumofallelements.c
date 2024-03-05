#include <stdio.h>
main() 
{
    int n,m;
    printf("Enter the number of rows array: ");
    scanf("%d", &n);
    printf("Enter the number of colum array: ");
    scanf("%d", &m);
     
    int arr[n][m],i,j;

    
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < m; j++) 
		{
        	printf("Enter the elements of the array[%d]:",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

   
    printf("The original matrix is:\n");
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < m; j++) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    int row;
    printf("Enter the row number to find its sum: ");
    scanf("%d", &row);

    
    int rowSum = 0;
    for ( j = 0; j < m; j++) 
	{
        rowSum = rowSum +arr[row][j];
    }
    printf("Sum of elements in row %d: %d\n", row, rowSum);

    
    int col;
    printf("Enter the column number to find its sum: ");
    scanf("%d", &col);

    
    int colSum = 0;
    for ( i = 0; i < n; i++) 
	{
        colSum = colSum+arr[i][col];
    }
    printf("Sum of elements in colum %d: %d\n", col, colSum);

}

