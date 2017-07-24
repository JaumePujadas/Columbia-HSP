/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program determines the distance between vectors  
*/


#include <stdio.h>
int main()
{

	int x=0,d=0, temp=0;
	printf("How big are your vectors: ");
	scanf("%d", &x);
	int a1[x];
	int a2[x];
	printf("Declare %d values for vector 1", x);
	for(int i=0;i<x;i++)
	{
		scanf("%d", &a1[i]);
	}
	printf("\nDeclare %d values for vector 2", x);
	for(int i=0;i<x;i++)
	{
		scanf("%d", &a2[i]);
	}
	for(int i=0; i<x;i++)
	{
		temp=((a1[i]-a2[i])*(a1[i]-a2[i]));
		d+=temp;
	}
	printf("\nThe Euclidean distance between those vectors is: %d", d);
}
