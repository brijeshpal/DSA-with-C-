#include<stdio.h>
int main()
{
	int a[]={100,96,47,35,29,33,99,87,74,63,99,63};
	int s=sizeof(a)/sizeof(int);
	int big=a[0];
	int small=a[0];
	for(int i=0;i<s;i++)
	{
		if(a[i]>big)
		big=a[i];
		if(a[i]<small)
		small=a[i];
	}
	printf("biggest: %d\n",big);
	printf("smallest: %d\n",small);
	return 0;
}
