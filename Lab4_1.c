/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program computes the minimum of two numbers
*/
#include <stdio.h>
int main()
{
	int a, b;
	int *pa=&a, *pb=&b;
	printf("Choose two numbers: ");
	scanf("%d %d", &a, &b);
	if(*pa>*pb)
	{
	printf("The minimum of %d and %d is %d", *pa, *pb, *pb);
	}
	else
	{
		printf("The minimum of %d and %d is %d", *pa, *pb, *pa);
	}
	
}
