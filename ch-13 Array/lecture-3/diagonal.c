#include<stdio.h>
main ()
{
 
        int array[100][100];
        int i,j,m,n,sum = 0;
 
        printf("Enetr the arrays row & column size: \n");
        scanf("%d %d", &m, &n);
 
        if (m==n ) 
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
                sum=sum+array[i][i];
            }
 
            printf("\nThe sum of diagonal elements of an array: %d\n", sum);
        }
        
        else
            printf("The given order is not square matrix\n");
}
