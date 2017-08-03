/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program flips pancakes 
*/
#include <stdio.h>
int n, stack=0, check=0;
int print(int data[]);
int main()
{
	printf("How many pancakes do you have?\n");
	scanf("%d", &n);
	int sizes[n];
	printf("Input the size of each pancake in a random order\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d", &sizes[i]);
	}
	print(sizes);
}
int print(int data[])
{
	int big = 0;
	int index = 0;
	int temp;
	check=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<data[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n-stack;i++)
	{
		if(data[i]>big)
		{
			big=data[i];
			index=i;
		}
	}
	for(int i=0;i<index;i++)
	{
		temp=data[i];
		data[i]=data[index-i];
		data[index-i]=temp;
	}
	for(int i=0;i<(n-1-stack);i++)
	{
		temp=data[i];
		data[i]=data[((n-1)-stack)-i];
		data[((n-1)-stack)-i]=temp;
	}
	stack++;
	for(int i=0;i<n-1;i++)
	{
		if(data[i]>data[i+1])
		{
			check=0;
		}
	}
	if(check==0)
	{
		printf("\n\n\n");
		print(data);
	}
	else
	{
		printf("\n\n\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<data[i];j++)
		{
			printf("*");
		}
		printf("\n");
		}
	}
}
