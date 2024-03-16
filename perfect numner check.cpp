#include<stdio.h>
int main()
{
	int n,i,dup,sum;
	sum=1;
			printf("\nEnter a number to check if it is perfect or not: ");
			scanf("%d",&n);
			dup=n;
			for(i=2;i<=(n/2);i++)
			{
				if(n%i == 0)
					sum=sum+i;
			}
			if(sum==dup)
				printf("\n%d is a perfect number",dup);
			else
				printf("\n%d is not a perfect number",dup);
}
