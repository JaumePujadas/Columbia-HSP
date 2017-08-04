/*
  Author: <Jaume Pujadas>
  Course: <floatroduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program handles data about batteries
*/
#include <stdio.h>
struct bat
{
	float V;//voltage
	float C;//capacity
	float E;//energy
	
}b;
int pow(float a, float t);
int powtime(float a);
int charge(float a);
int main()
{
	int x;
	float amp, time;
	printf("Would you like to know?\n Can a battery power a device for a certain amount of time? (1)\nHow long can a battery power a certain device(2)\nHow long will it take to recharge the battery(3)");
	scanf("%d", &x);
	printf("What are the voltage, capacity(joules), and energy of the battery(joules)?\n");
	scanf("%f %f %f",&b.V,&b.C,&b.E);  
	if(x==1)
	{
		printf("How many amps does the device need and for how long would it be powered?\n");
		scanf("%f %f", &amp, &time);
		if(pow(amp, time)==1)
		{
			printf("The battery can power the device for the time needed\n");
		}
		else
		{
			printf("The battery cannot power the device for the time needed\n");
		}
		
	}
	else if(x==2)
	{
		printf("How many amps does the device need?\n");
		scanf("%f", &amp);
		printf("The battery, given it's current charge, can power that device for %d seconds\n", powtime(amp));
	}
	else if(x==3)
	{
		printf("How many amps of current will be used to recharge the battery?\n");
		scanf("%f", &amp);
		printf("It will take %d seconds for the battery to charge\n", charge(amp));
	}
	else
	{
		printf("Fine then.");
	}
}
int pow(float a, float t)
{
	if(((a*b.V)*t)<=b.E)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int powtime(float a)
{
	int t = (b.E/(b.V*a));
	return t;
}
int charge(float a)
{
	float toFill=(b.C-b.E);
	int t=((b.V*a)/toFill);
	return t;
}
