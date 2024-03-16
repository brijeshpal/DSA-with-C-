#include<stdio.h>
int main()
{
	int i,n,sum;
	sum=0;
			printf("\nEnter the limit for the summation: ");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				sum=sum+i;
			}
			printf("\nSum of the first %d natural numbers = %d",n,sum);
}
