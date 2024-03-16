#include<stdio.h>
int main()
{
	int a=0,b=0,*p,*q;
	printf("\nEnter 1st number: ");
				scanf("%d",&a);
				printf("\nEnter 2nd number: ");
				scanf("%d",&b);
				printf("\nBefore Swapping -\na = %d and b = %d",a,b);
				p=&a;
				q=&b;
				*p = *p + *q;
				*q = *p - *q;
				*p = *p - *q;
				printf("\nAfter Swapping -\na = %d and b = %d",a,b);
}
