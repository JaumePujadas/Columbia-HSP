/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program creates arrays, multiplies them, and displays them in rows  
*/


#include <stdio.h>
int main()
{
	int x[20];
	int y[20];
	int z[20];
	printf("Please input 20 numbers: ");
	for(int i=0;i<20;i++)
	{
		scanf("%d", &x[i]);
	}
	printf("Please input 20 more numbers: ");
	for(int i=0;i<20;i++)
	{
		scanf("%d", &y[i]);
	}
	for(int i=0;i<20;i++)
	{
		z[i]=(x[i]*y[i]);
	}
	printf("Array X: |");
	for(int i=0;i<20;i++)
	{
		printf("%d, ", x[i]);
	}
		printf("|\nArray Y: |");
	for(int i=0;i<20;i++)
	{
		printf("%d, ", y[i]);
	}
		printf("|\nArray Z: |");
	for(int i=0;i<20;i++)
	{
		printf("%d, ", z[i]);
	}
		printf("|");
}
