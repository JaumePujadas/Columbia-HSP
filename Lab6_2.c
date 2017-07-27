/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program finds the smallest integer in an array of 8 integers
*/
#include <stdio.h>
int sort(int values[], int num);
int nums[8];
int x=1;
int main()
{
	printf("Please input 8 numbers:\n");
	scanf("%d %d %d %d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4], &nums[5], &nums[6], &nums[7]);
	sort(nums, nums[0]);
}
int sort(int values[], int num)
{

	if(x>=8)
	{
		printf("The smallest number in that array is %d", num);
	}
	else
	{
		if(values[x]<num)
		{
			num = values[x];
			x++;
		}
		else
		{
			x++;
		}
		sort(values, num);
	}
		
}

