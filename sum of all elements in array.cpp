#include<stdio.h>
int main()
{
	int i, a=0,*p, arr[25], sum=0;
				printf("\nEnter total elements you want (<25): ");
				scanf("%d",&a);
				printf("\nEnter the array elements -\n");
				for(i=0;i<a;i++)
				{
					printf("Element %d: ",(i+1));
					scanf("%d",&arr[i]);
				}
				p=arr;
				printf("\nGiven Array: ");
				for(i=0;i<a;i++)
				{
					printf("%d ",*p);
					sum+=*(p++);
				}
				printf("\nSum of all elements in the above array = %d",sum);
}
