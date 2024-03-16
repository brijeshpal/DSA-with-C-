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
     char i,str[50],ctr,v,l;
     	printf("\nEnter a string: ");
				gets(str);
				l=len(str);
				ctr=0;
				for(i=0;i<l;i++)
				{
					if('a'==str[i] || 'e'==str[i] || 'i'==str[i] || 'o'==str[i] || 'u'==str[i] || 'A'==str[i] || 'E'==str[i] || 'I'==str[i] || 'O'==str[i] || 'U'==str[i])
						v++;
					else
						ctr++;
				}
				printf("\nTotal number of vowels present in the given string is %d\nTotal number of consonants present in the given string is %d",v,ctr);
}
