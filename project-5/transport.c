#include<stdio.h>

main()
{
	 int m, n;
     
     printf("\nEnter number of rows & columns of aray : ");
     scanf("%d %d", &m, &n);

	int arr[m][n],trans[m][n];
	int i, j;
	
     for(i=0; i<m; i++)
     {
              for(j=0; j<n; j++)
              {
					printf("\nEnter array elements:\n");
                       scanf("%d", &arr[i][j]);
              }
     }
     
     for(i=0; i<m; i++)
     {
              for(j=0; j<n; j++)
              {
                       trans[j][i] = arr[i][j];
              }
     }
     
	printf("\n array trasporting:\n");
	
     for(i=0; i<n; i++)
     {
              for(j=0; j<m; j++)
              {
                       printf("%d", trans[i][j]);
              }
              printf("\n");
     }
}
