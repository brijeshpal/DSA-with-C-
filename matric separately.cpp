#include<stdio.h>
int main()
{
	    int i,m,j,n,k,mat[50][50],rsum,csum;
	    printf("\nEnter the dimensions of the Matrix -\nEnter no. of rows you want: ");
				scanf("%d",&m);
				printf("\nEnter no. of columns you want: ");
				scanf("%d",&n);
				printf("\nEnter elements for the Matrix -\n");
				k=1;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("Element %d: ",k++);
						scanf("%d",&mat[i][j]);
					}
				}
				printf("\nThe given Matrix is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d ",mat[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					rsum=0;
					for(j=0;j<n;j++)
					{
						rsum+=mat[i][j];
					}
					printf("\nSum of values of Row No.%d = %d",i+1,rsum);
				}
				for(i=0;i<n;i++)
				{
					csum=0;
					for(j=0;j<m;j++)
					{
						csum+=mat[j][i];
					}
					printf("\nSum of values of Column No.%d = %d",i+1,csum);
				}
}
