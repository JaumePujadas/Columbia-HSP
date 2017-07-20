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
	int hours;
	int mins;
	printf("How many minutes from now do you expect to be home? Input your answer with only the number of hours first followed by only the number of minutes: ");
	scanf("%d %d", &hours, &mins);
	hours=hour+hours;
	mins=min+mins;
	if(hours>=24)
	{
	hours-=24;
	}
	if(mins<60)
	{
		printf("You will be home at %d:%d\n", hours, mins);
	}
	else if (mins>=60)
	{
		hours++;
		mins-=60;
		if(mins>=10)
		{
		printf("You will be home at %d:%d\n", hours, mins);
		}
		else
		{
		printf("You will be home at %d:0%d\n", hours, mins);
		}
	}
}
