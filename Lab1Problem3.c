#include <stdio.h>

int main(void)
{
	int yrs;
	printf("How many years of school have you completed(starting at 1st grade)? ");
	scanf("%d", &yrs);
	if(yrs==0)
	{
	printf("You should go to school");
	}	
	else if(yrs>=1&&yrs<=4)
	{
	printf("You are in elementary school and are in %d grade. ", (yrs+1));
	}
	else if (yrs>=5&&yrs<=7)
	{
	printf("You are in middle school and are in %d grade. ", (yrs+1));
	}
	else if (yrs>=8&&yrs<=11)
	{
	printf("You are in high school and are in %d grade. ", (yrs+1));
	}
	else if (yrs>=12&&yrs<=15)
	{
	printf("You are in college");
	}
	else
	{
	printf("You be lying");
	}
}
