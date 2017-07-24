/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 3>

  This program sorts numbers
*/
#include <stdio.h>
void sort(int, int, int);
int x, y, z;
int main()
{
	printf("Choose three numbers: ");
	scanf("%d %d %d" , &x, &y, &z);
	sort(x, y, z);
}
void sort(int num1, int num2, int num3)//sorts numbers
{

	if((num1>num2&&num2>num3)||(num2>num1&&num1>num3))
	{
	printf("%d", num3);
	}
	if((num1>num3&&num3>num2)||(num3>num1&&num1>num2))
	{
	printf("%d", num2);
	}
	if((num3>num2&&num2>num1)||(num2>num3&&num3>num1))
	{
	printf("%d", num1);
	}
}

