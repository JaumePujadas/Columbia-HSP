/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program orders lists in alphabetical order
*/
#include <stdio.h>
#include <string.h>
int x;
int main()
{
	struct data
	{
		char fname[20];
		char lname[20];
		int age;
	};
	printf("How many names would you like to put in?");
	scanf("%d", &x);
	struct data d[x];
	for(int i=0;i<x;i++)
	{
		printf("Enter name #%d(Lastname, Firstname):\n", (i+1));
		scanf("%s %s", &d[i].lname, &d[i].fname);
		printf("How old is this person?\n");
		scanf("%d", &d[i].age);
	}
	for(int i=65;i<=90;i++)
	{
		for(int j=0;j<x;j++)
		{
			if(d[j].lname[0]==i)
			{
				printf("%s %s %d\n", d[j].lname, d[j].fname, d[j].age);
			}
		}
	}
}
