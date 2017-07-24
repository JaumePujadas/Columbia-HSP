/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program uses pointers to print the last element of an array
*/
#include <stdio.h>

int main()
{
	int arr[10];
	for(int i=0; i<10;i++)
	{
		arr[i]=i;
	}
	int *aptr = arr+3;
	printf("arr[9] = %d\n", *(aptr+6));
}
//arr[i] ==*(aptr+i)
