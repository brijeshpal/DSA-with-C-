#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter the first number: ");
			scanf("%d",&a);
			printf("\nEnter the second number: ");
			scanf("%d",&b);
			
			printf("\nBefore Swapping -\n a=%d and b=%d",a,b);
			a=a+b;
			b=a-b;
			a=a-b;
			printf("\nAfter Swapping -\n a=%d and b=%d",a,b);
}
