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
     char str[50],i,k;
     printf("\nEnter a string: ");
				gets(str);
				int l=len(str);
				k=0;
				for(i=0;i<l;i++)
				{
					if(str[i]!=str[l-1-i])
					{
						printf("\nNon-Palindrome Word");
						k=1;
						break;
					}
				}
				if(k!=1)
					printf("\nPalindrome Word");
}
