/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program creates arrays, multiplies them, and displays them in rows  
*/
#include <stdio.h>
#include <math.h>
float scanVec();
float normalize(float vector[]);
float printVec(float normVec[]);
int x;
float main()
{
	scanVec();
}
float scanVec()//Scans the vector - it probably works...
{
	printf("How many elements are in your vector?\n");
	scanf("%d", &x);
	float vector[x];
	printf("Please input %d numbers for your vector:\n", x);
	for(int i=0;i<x;i++)
	{
		scanf("%f", &vector[i]);
	}
	normalize(vector);
	return 0;
}
float normalize(float vector[])//Normalizes each element in the array - I think it works?
{
	float normVec[x];
	float denominator;
	for(int i=0;i<x;i++)
	{
		denominator+=(vector[i]*vector[i]);
	}
	denominator = sqrt(denominator);
	for(int i=0;i<x;i++)
	{
		normVec[i]=(vector[i]/denominator);
	}
	printVec(normVec);
	return 0;
}
float printVec(float normVec[])
{
	printf("The normalized array is: | ");
	for(int i=0;i<x-1;i++)
	{
		printf("%f, ", normVec[i]);
	}
	printf("%f |", normVec[x-1]);
}

/* 	Best	Error	Message		Ever

*** stack smashing detected ***: ./a.out terminated
Aborted (core dumped)

*/
