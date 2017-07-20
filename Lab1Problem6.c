#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t t;
	struct tm *now;
	t=time(0);
	now=localtime(&t);
	int hour = now->tm_hour;
	int min = now -> tm_min;
	int sunset_hr; 
	int sunset_min;
	printf("Please input the hour and then the minute of the sunset today in 24 hour format: ");
	scanf("%d %d", &sunset_hr, &sunset_min);
	if(hour<=12)
	{
		printf("Good morning");
	}
	else if(hour>12)
	{
		if(hour<sunset_hr)
		{
			printf("Good afternoon");
		}
		if(hour==sunset_hr&&min<sunset_min)
		{
			printf("Good afternoon");
		}
		else
		{
		printf("Good evening");
		}
	}
}
