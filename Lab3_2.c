/*
  Author: <Jaume>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 3>

  This program sums the digits of a number until the number is less than 10
*/

#include <stdio.h>
int sumDigits(int num);
int getDigits(int num);
int numDigits(int num);
int x;
int maximum = 0;
int index = 0;
int digVal=0;
int sum=0;
int sum2=0;
int main()
{
	printf("Choose a large number: ");
	scanf("%d",&x);
		numDigits(x);
		for(int i=1;i<=index;i++)
		{
			getDigits(maximum);
			maximum/=10;
		}
	if(sum>10)
	{
		digVal=0;
		x=sum;
		sum=0;
		numDigits(x);
		for(int i=1;i<=index;i++)
		{
			getDigits(maximum);
			maximum/=10;
		}
		printf("The sum of the digits of the number and the some of those digits is %d\n", sum);
	}
	else if (sum==10)
	{
		printf("The sum of the digits of the number and the some of those digits is 1");
	}
	else
	{
		printf("This sum of the digits of the number is %d\n", sum);
	}
}
int sumDigits(int num)
{
	sum=sum+num;
}
int getDigits(int num)
{
	x=(x-(digVal*maximum*10));
	digVal=0;
	for(int i=1;(i*num)<=x;i++)
	{
		digVal++;
	}
	sumDigits(digVal);
	
}
int numDigits(int num)
{
	maximum=0;
	index=0;
	for (int i=1; i<num;i*=10)
	{
		index++;
		maximum=i;
	}
}
