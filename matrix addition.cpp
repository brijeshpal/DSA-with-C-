#include<stdio.h>
int main()
{
	    int i,m,j,n,k,mat[50][50];
	    	printf("\nEnter the dimensions of the two Matrices -\nEnter no. of rows you want: ");
				scanf("%d",&m);
				printf("\nEnter no. of columns you want: ");
				scanf("%d",&n);
				printf("\nEnter elements for the First Matrix -\n");
				k=1;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("Element %d: ",k++);
						scanf("%d",&mat[i][j]);
					}
				}
				printf("\nEnter elements for the Second Matrix -\n");
				k=1;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("Element %d: ",k++);
						scanf("%d",&mat[i][j]);
					}
				}
				printf("\nThe First Matrix is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d ",mat[i][j]);
					}
					printf("\n");
				}
				printf("\nThe Second Matrix is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d ",mat[i][j]);
					}
					printf("\n");
				}
				printf("\nResultant Matrix is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d ",mat[i][j] + mat[i][j]);
					}
					printf("\n");
				}
}
