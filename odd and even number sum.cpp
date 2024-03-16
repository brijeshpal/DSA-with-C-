#include<stdio.h>
int main()
{
	int i,arr[50],even,odd;
	printf("\nEnter 10 integers for the array -\n");
				for(i=0;i<10;i++)
				{
					printf("Element %d: ",(i+1));
					scanf("%d",&arr[i]);
					if(arr[i]%2==0)
						even+=arr[i];
					else
						odd+=arr[i];
				}
				printf("\nSum of all odd integers = %d",odd);
				printf("\nSum of all even integers = %d",even);
}
