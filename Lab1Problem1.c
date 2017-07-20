//PROBLEM 1

#include <stdio.h>

int main(void)
{
	int x, y, z;
	printf("List 3 numbers: ");
	scanf("%d%d%d", &x, &y, &z);
	if(((z>x)&&(z<y))||((z<x)&&(z>y)))
	{
		printf("%d is between %d and %d.\n", z, x, y);
	} 
	else
	{
		printf("%d is not between %d and %d.\n", z, x, y);
	}
}

