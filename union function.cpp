#include <stdio.h>
union sti
{
	int nu;
	char m;
	
};
int main ()
{
	union sti s;
	printf("%d", sizeof(s));
	return 0;
}
