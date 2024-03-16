#include<stdio.h>
int main()
{
	int s;
	printf("enter size: ");
	scanf("%d",&s);
	int a[s];
	int sum=0;
	for(int i=0;i<s;i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum: %d",sum);
	return 0;
}
