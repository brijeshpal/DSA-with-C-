#include<stdio.h>
int main ()
{
	int i,j,a,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	a=1;
    		for(i=1;i<=n;i++)
    		{
    			for(j=n-1;j>=i;j--)
    			{
    				printf("  ");
				}
        		for(j=i;j<=a;j++)
        		{
					printf("%d ",j);
        		}
        		for(j=a-1;j>=i;j--)
        		{
        			printf("%d ",j);
				}
        		a+=2;
        		printf("\n");
    		}
}
