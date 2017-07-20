#include <stdio.h>
int main(void)
{
	char a;
	int x;
	printf("Type a letter: ");
	scanf("%c", &a);
	x=a;
	if(x>=65&&x<=90)
	{
	printf("%c is in upper case", a);
	}
	else if(x>=97&&x<=122)
	{
	printf("%c is in lower case", a);
	}
}
