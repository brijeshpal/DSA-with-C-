#include<stdio.h>
int main()
{
	char *ptr, s[20];
	printf("\nEnter a string: ");
				gets(s);
				ptr=s;
				printf("\nGiven String: ");
				while(*ptr!='\0')
				{
					printf("%c",*(ptr++));
				}
}
