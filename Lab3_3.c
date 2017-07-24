/*
  Author: <Jaume>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 3>

  This program replaces digits in a number
*/
#include <stdio.h>
int replaceDigits(int num);
int getDigits(int num);
int numDigits(int num);
int x;
int maximum = 0;
int index = 0;
int digVal=0;
int d1, d2;
int main()
{
	printf("Choose a large number: ");
	scanf("%d",&x);
	printf("Enter a digit to replace and a digit to replace it with");
	scanf("%d %d", &d1, &d2);
	numDigits(x);
	for(int i=1;i<=index;i++)
	{
		getDigits(maximum);
		maximum/=10;
	}
}	
int replaceDigits(int num)
{
	if(digVal==d1)
	{
		printf("%d", d2);
	}
	else
	{
		printf("%d", digVal);
	}
}
int getDigits(int num)
{
	x=(x-(digVal*maximum*10));
	digVal=0;
	for(int i=1;(i*num)<=x;i++)
	{
		digVal++;
	}
	replaceDigits(digVal);
	
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
