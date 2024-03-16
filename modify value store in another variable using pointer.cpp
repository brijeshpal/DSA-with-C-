#include<stdio.h>
int main()
{
	int a=0, *p;	
	printf("\nEnter a number: ");
				scanf("%d",&a);
				p=&a;
				printf("\nEnter the value you want to be stored after modification: ");
				scanf("%d",p);
				printf("\nAfter modification -\nValue of a = %d",a);
}
