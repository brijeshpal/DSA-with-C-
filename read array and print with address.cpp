#include<stdio.h>
int main()
{
	int i, a=0, arr[25];
	printf("\nEnter total elements you want (<25): ");
				scanf("%d",&a);
				printf("\nEnter the array elements -\n");
				for(i=0;i<a;i++)
				{
					printf("Element %d: ",(i+1));
					scanf("%d",&arr[i]);
				}
				printf("\nElements with their address -\n");
				for(i=0;i<a;i++)
				{
					printf("\nElement %d: \t\tAddress: %d",arr[i],&arr[i]);
				}
}
