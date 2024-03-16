#include<stdio.h>
int main()
{
	int n,a,b,s;
	a=0,b=1,s=0;
			printf("\nEnter a number upto which the Fibonacci Series will be shown: ");
			scanf("%d",&n);
			printf("\n Fibonacci series up to %d -\n %d, %d",n,a,b);
			while(s<n)
			{
				s=a+b;
				printf(", %d",s);
				a=b;
				b=s;
			}
}
