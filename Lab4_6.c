/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program detects duplicate numbers in an array  
*/


#include <stdio.h>
int main()
{
	int x=0,d=0;
	printf("How big is your array: ");
	scanf("%d", &x);
	int a[x];
	printf("Declare %d values for your array", x);
	for(int i=0;i<x;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j=0;j<x;j++)
	{
		for(int i=j+1;i<x;i++)
		{
			if(a[j]==a[i])
			{
				d++;
			}
		}
	}
	printf("There are %d duplicates in your array", d);
}
