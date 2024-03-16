#include<stdio.h>
int main()
{
	    int i,m,j,n,k,mat[50][50];
	    	printf("\nEnter the dimensions of the 2D array(Matrix) -\nEnter no. of rows you want: ");
				scanf("%d",&m);
				printf("\nEnter no. of columns you want: ");
				scanf("%d",&n);
				printf("\nEnter elements for the 2D array(Matrix) -");
				k=1;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("\nElement %d: ",k++);
						scanf("%d",&mat[i][j]);
					}
				}
				printf("\nThe 2D array(Matrix) is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d ",mat[i][j]);
					}
					printf("\n");
				}
}
