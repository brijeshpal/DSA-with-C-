#include<stdio.h>
int main()
{
	int n,n1,rev;
	printf("\nEnter the number to be reverseed: ");
			scanf("%d",&n);
		    rev=0;
			n1=n;
			while(n1>0)
			{
				rev=rev*10+(n1%10);
				n1=n1/10;
			}
			printf("\nReverse of %d is %d",n,rev);
}
