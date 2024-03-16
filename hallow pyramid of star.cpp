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
        		for(j=1;j<=a;j++)
        		{
					if(j==1 || j==a || i==n)
            			printf("* ");
            		else
            			printf("  ");
        		}
        		a+=2;
        		printf("\n");
    		}
    		
}
