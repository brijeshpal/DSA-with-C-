#include<stdio.h>
#include<string.h>
int len(char str[])
{
	int i=0,l=0;
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	return l;
}
int main ()
{
     char str[50];
     printf("\nEnter a string: ");
				gets(str);
				
				printf("\nLength of the given string is %d",len(str));
				
				
}
