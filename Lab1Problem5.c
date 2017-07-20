#include <stdio.h>
int main(void)
{
	int year, month, days;
	char suffix = 's';
	printf("Please enter a year and a month(ex: January = 1): ");
	scanf("%d %d", &year, &month);
	if(year<2017)
	{
		suffix = 'd';
	}
	else if(year>=2017)
	{
		suffix = 's';
	}
	if(month==1)
	{
		days=31;
		printf("In the year %d, the month of January ha%c %d days. \n", year, suffix, days);
	}
	else if(year%4==0&&month==2)
	{
		days=29;
		printf("In the year %d, the month of February ha%c %d days. \n", year, suffix, days);
	}
	else if(month==2)
	{
		days=28;
		printf("In the year %d, the month of February ha%c %d days. \n", year, suffix, days);
	}
	else if(month==3)
	{
		days=31;
		printf("In the year %d, the month of March ha%c %d days. \n", year, suffix, days);
	}
	else if(month==4)
	{
		days=30;
		printf("In the year %d, the month of April ha%c %d days. \n", year, suffix, days);
	}
	else if(month==5)
	{
		days=31;
		printf("In the year %d, the month of May ha%c %d days. \n", year, suffix, days);
	}
	else if(month==6)
	{
		days=30;
		printf("In the year %d, the month of June ha%c %d days. \n", year, suffix, days);
	}
	else if(month==7)
	{
		days=31;
		printf("In the year %d, the month of July ha%c %d days. \n", year, suffix, days);
	}
	else if(month==8)
	{
		days=31;
		printf("In the year %d, the month of August ha%c %d days. \n", year, suffix, days);
	}
	else if(month==9)
	{
		days=30;
		printf("In the year %d, the month of September ha%c %d days. \n", year, suffix, days);
	}
	else if(month==10)
	{
		days=31;
		printf("In the year %d, the month of October ha%c %d days. \n", year, suffix, days);
	}
	else if(month=11)
	{
		days=30;
		printf("In the year %d, the month of November ha%c %d days. \n", year, suffix, days);
	}
	else if(month=12)
	{
		days=31;
		printf("In the year %d, the month of December ha%c %d days. \n", year, suffix, days);
	}
	else
	{
	printf("Remember: There are only 12 months! ");
	}	
	return 0;
}
