#include <stdio.h>
int main(void)
{
	int num = -2;
	printf("Pick a number! Any number! ");
	scanf("%d",&num);
	 if(num==0)
	 {
	 printf("Your number is 0! ");
	 }
	 else if (num>0)
	 {
	printf("Your number is positive! ");
	 }
	 else
	 {
	 	 printf("Your number is negative! ");
	 }
	 if(num%11==0)
	 {
	 	 printf("Your number is divisible by 11! ");
	 }
	 if(num%5==0)
	 {
	  printf("Your number is divisible by 5! ");
	}
	if(num%2==0)
	{
		printf("Your number is even! ");
	}
	else
	{
		 printf("Your number is odd! ");
	}
	if(num%4==0)
	{
		 printf("Your number would be a leap year! I bet you'll never guess how I knew that!");
	}
	else
	{
		 printf("Your number would be a regular year! I bet you'll never guess how I knew that!");
	}
}
