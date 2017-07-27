/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program finds the how many times an integer is present in a sequence of numbers
*/
#include <stdio.h>
int count(int ints[], int num);
int countHelper(int ints[], int num, int high);
int length, search, counter=0;
int main()
{
	printf("How long is the sequence of integers that you'd like to input?");
	scanf("%d", &length);
	int nums[length];
	printf("Please enter %d integers:\n", length);
	for(int i=0;i<length;i++)
	{
		scanf("%d", &nums[i]);
	}
	printf("Which integer would you like to search for?");
	scanf("%d", &search);
	count(nums, 0);
	printf("The integer %d repeats %d times in your sequence.\n", search, counter);
}
int count(int ints[], int num)
{
	if(num<=length)
	{
		countHelper(ints, num, counter);
		num++;	
		count(ints, num);	
	}
}
int countHelper(int ints[], int num, int high)
{
	if(ints[num]==search)
	{
		high++;
	}
	counter=high;
}
