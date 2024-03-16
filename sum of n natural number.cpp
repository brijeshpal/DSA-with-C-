#include <stdio.h>
#include <conio.h>
int main()
{
	int n, sum;
	printf("enter the number you want to sum:");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum of %d natural number is = %d",n,sum);
} 
