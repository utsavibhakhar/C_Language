#include<stdio.h>
main ()
{
 
        int array[100][100];
        int m,n;
 
        printf("Enetr the arrays row & column size: \n");
        scanf("%d %d", &m, &n);
 
 		int i,j,sum = 0;
        if (m == n) 
        {   
            for (i=0;i<m;i++)
            {
                for (j=0;j<n;j++)
                {
                	 printf("[%d][%d]:",i,j);
                     scanf("%d",&array[i][j]);
                }
            }
            
            for (i=0;i<m;i++)
            {
     	 		for (j=0;j<n;j++)
            	{
               		sum=sum+array[i][j];
            	}
 			}
 			
            printf("\nThe sum of cross elements of an array: %d\n", sum);
        }
        
        else
            printf("The given order is not square matrix\n");
}
