#include<stdio.h>
int main()
{
	int s;
	printf("enter size: ");
	scanf("%d",&s);
	int a[s];
	for(int i=0;i<s;i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<s;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	int r[s];
	int x=0;
	for(int i=s-1;i>=0;i--)
	{
		r[x]=a[i];
		x++;
	}
	for(int i=0;i<s;i++)
	{
		printf("%d ",r[i]);
	}
	return 0;
}
