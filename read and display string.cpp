#include<stdio.h>
#include<string.h>
int main ()
{
     char str[50],buff[5],st[50],c;
     printf("\nEnter a string: ");
				/*gets(buff);
				gets(str);*/
				scanf("%s",str);
				printf("\nGiven string is ");
				printf("\n%s",str);
				gets(buff);
				printf("\nEnter a string: ");
				fgets(str,50,stdin);
				printf("\nGiven string is ");
				puts(str);
}
