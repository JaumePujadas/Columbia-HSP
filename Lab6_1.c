/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program reverses arrays
*/
#include <stdio.h>
int reverse(int values[]);
int length;
int x=0;
int main()
{
	printf("How many numbers would you like to input?\n");
	scanf("%d",&length);
	int nums[length];
	printf("Input %d numbers: \n", length);
	for(int i=0;i<length;i++)
	{
		scanf("%d", &nums[i]);
	}
	for(int i=0;i<length;i++)
	{
		printf("%d", nums[i]);
		if(i+1!=length)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	reverse(nums);
}
int reverse(int values[])
{
	int temp;
	if(x>=length/2)
	{
		for(int i=0;i<length;i++)
	{
		printf("%d", values[i]);
		if(i+1!=length)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	}
	else
	{
		temp = values[x];
		values[x] = values[length-(x+1)];
		values[length-(x+1)]=temp;
		x++;
		reverse(values);
	}
}
