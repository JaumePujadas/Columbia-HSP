/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program averages the elements in an array and checks if they are above or below the average
*/
#include <stdio.h>
int average(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
int checker(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
int less[10];
int x=0;
int numbs[10];
int main()
{
	printf("Input 10 numbers: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &numbs[0], &numbs[1], &numbs[2], &numbs[3], &numbs[4], &numbs[5], &numbs[6], &numbs[7], &numbs[8], &numbs[9]);
	printf("The approximate average of those numbers is %d\n", (average(numbs[0], numbs[1], numbs[2], numbs[3], numbs[4], numbs[5], numbs[6], numbs[7], numbs[8], numbs[9])));
	checker(numbs[0], numbs[1], numbs[2], numbs[3], numbs[4], numbs[5], numbs[6], numbs[7], numbs[8], numbs[9]);
	printf("The following numbers are below the average: ");
	for(int i =0;i<x;i++)
	{
	printf("\n%d", less[i]);
	}
	
}
int average(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)//computes the average of the array
{
	int sum=0;
	sum=((a+b+c+d+e+f+g+h+i+j)/10);
	
	return sum;
}
int checker(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)//checks if numbers are above or below the average
{
	x=0;
	for(int i=0;i<=9;i++)
	{
	if(numbs[i]<(average(numbs[0], numbs[1], numbs[2], numbs[3], numbs[4], numbs[5], numbs[6], numbs[7], numbs[8], numbs[9])))
	{
	less[x] = numbs[i];
	x++;
	}
	}
}
