#include<stdio.h>
int *sort(int arr[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr;
}

void linear(int arr[], int n, int item)
{
	int i, flag=0;
	for(i=0;i<n;i++)
	{
		if(item == arr[i])
		{
			flag=1;
			printf("\nSearch Successful !!!! %d found at index %d",item,i);
			break;
		}
	}
	if(flag == 0)
		printf("\nSearch unsuccessful !!!! Data not found in the array!");
}

void binary(int arr[], int n, int item)
{
	int i, flag=0, lb=0, ub=n-1, mid=0;
	arr=sort(arr,n);
	while(lb<=ub)
	{
		mid=(ub+lb)/2;
		if(arr[mid] == item)
		{
			flag=1;
			printf("\nSearch Successful !!!! %d found at index %d",item,mid);
			break;
		}
		else if(arr[mid]>item)
			lb=mid+1;
		else
			ub=mid-1;
	}
	if(flag == 0)
		printf("\nSearch unsuccessful !!!! Data not found in the array!");
}
int main()
{
	int ch,i,arr[50],item;
	printf("\nWhich searching method you want to use?\n1. Linear Search\n2. Binary Search\nYour choice: ");
				scanf("%d",&ch);
				printf("\nEnter the list of 20 elements -\n");
				for(i=0;i<5;i++)
				{
					printf("Element %d: ",(i+1));
					scanf("%d",&arr[i]);
				}
				printf("\nEnter the element you want to search: ");
				scanf("%d",&item);
				if(ch==1)
					linear(arr,5,item);
				else
					binary(arr,5,item);
}
